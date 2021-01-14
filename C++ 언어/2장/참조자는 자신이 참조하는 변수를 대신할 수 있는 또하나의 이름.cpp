#include <iostream>

using namespace std;

int main(void){
	int num1 = 20;
	int& num2 = num1;//num1과 같은 메모리 공간을 가리키는 또 하나의 변수 이름.
	//즉, 레퍼런스는 변수에 대해서만 선언이 가능하고
	//선언과 동시에 참조할 변수로 초기화 해야 한다.
	int *num3 = &num1;//num1의 시작 주소를 가리키는 포인터
	
	cout << "num1의 주소: " << &num1 << endl;
	cout << "num2의 주소: " << &num2 << endl;
	cout << "num3의 주소: " << &num3 << endl;
	
	cout << "sizeof num1: " << sizeof(num1) << endl;
	cout << "sizeof num2: " << sizeof(num2) << endl;
	cout << "sizeof num3: " << sizeof(num3) << endl;
	
	num2 = 3047;//int형 변수 num1처럼 int참조차로 선언된 num2에 정수값을 할당할 수 있다.
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;
	
	return 0; 
}
