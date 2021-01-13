#include <iostream>

using namespace std;

int val = 100;

int main(void){
	int val = 20;
	val += 3;
	::val += 3;
	
	cout << "지역변수 val의 값: " << val << endl;
	cout << "전역변수 val의 값: " << ::val << endl;
	
	return 0;
} 
