#include <iostream>

using namespace std;

int val = 100;

int main(void){
	int val = 20;
	val += 3;
	::val += 3;
	
	cout << "�������� val�� ��: " << val << endl;
	cout << "�������� val�� ��: " << ::val << endl;
	
	return 0;
} 
