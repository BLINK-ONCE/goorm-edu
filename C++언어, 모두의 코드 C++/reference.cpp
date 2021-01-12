#include <iostream>

using namespace std;


int main(void) {
	int a = 3;
	int& another_a = a;

	another_a = 5;
	cout << "a : " << a << endl;
	cout << "anotoher_a : " << another_a << endl;
	
	return 0;
}