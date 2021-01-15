#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1; 
	}
	Circle(int r) { 
		radius = r; 
	}
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void) {
	Circle donut;
	Circle pizza(30);
	
	//��ü �̸����� ��� ����
	cout << donut.getArea() << endl;

	//��ü �����ͷ� ��� ����
	Circle* p;
	p = &donut;

	cout << p->getArea() << endl;//donut�� getArea() ȣ��
	cout << (*p).getArea() << endl;//donut�� getArea() ȣ��

	Circle* ptr;
	ptr = &pizza;
	cout << ptr->getArea() << endl;//pizza�� getArea() ȣ��
	cout << (*ptr).getArea() << endl;//pizza�� getArea() ȣ��

	return 0;
}
