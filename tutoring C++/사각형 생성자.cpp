#include <iostream>

using namespace std;

class Rectangle {
public:
	int width; int height;
	Rectangle();
	Rectangle(int x);
	Rectangle(int x, int y);
	//int getArea();
	bool isSquare();
};

/*
int Rectangle::getArea() {
	return width * height;
}
*/

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle::Rectangle(int x) {
	width = x;
	height = x;
}
Rectangle::Rectangle(int x, int y) {
	width = x;
	height = y;
}

bool Rectangle::isSquare() {
	if (height == width) return 1;
	else return 0;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다.\n";
	if (rect2.isSquare()) cout << "rect2은 정사각형이다.\n";
	if (rect3.isSquare()) cout << "rect3은 정사각형이다.\n";
	//소멸자, new, delete
}