#include <iostream>

using namespace std;

int change_val(int* p) {
	*p = 3;
	return 0;
}

int main(void) {
	int number = 5;

	cout << number << endl;
	change_val(&number);
	cout << number << endl;
	
	return 0;
}