#include <iostream>

using namespace std;

namespace Company1{
	void func(void);
	void hello(void);
}

namespace Company2{
	void func(void);
}

int main(void){
	Company1::func();
	
	return 0;
}

void Company1::hello(void){
	cout << "hello" << endl;
}

void Company1::func(void){
		cout << "Company1 �� ������ �Լ�" << endl;
		hello();
		Company2::func();
	}

void Company2::func(void){
		cout << "Company2 �� ������ �Լ�" << endl;
	}
