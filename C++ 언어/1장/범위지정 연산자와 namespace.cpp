#include <iostream>

using namespace std;

namespace Company1{
	void func(void){
		cout << "Company1 �� ������ �Լ�" << endl;
	}
}

namespace Company2{
	void func(void){
		cout << "Company2 �� ������ �Լ�" << endl;
	}
}

int main(void){
	Company1::func();
	Company2::func();
	
	return 0;
}
