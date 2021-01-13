#include <iostream>

using namespace std;

namespace Company1{
	void func(void);
}

namespace Company2{
	void func(void);
}

int main(void){
	Company1::func();
	Company2::func();
	
	return 0;
}

void Company1::func(void){
		cout << "Company1 이 정의한 함수" << endl;
	}

void Company2::func(void){
		cout << "Company2 이 정의한 함수" << endl;
	}
