#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2){
	return num1 + num2;
}

int main(void){
	cout << Adder() << endl;//Adder(1,2)
	cout << Adder(5) << endl;//Adder(5,2)
	cout << Adder(3, 5) << endl;//Adder(3,5)
	
	return 0;
}
