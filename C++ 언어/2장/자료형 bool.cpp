#include <iostream>

using namespace std;

bool isPositive(int num){
	if (num <= 0) return false;
	else return true;
}

int main(void){
	bool isPos;
	int num;
	cout << "input number: ";
	cin >> num;
	
	isPos = isPositive(num);
	if(isPos) cout << "positive number" << endl;
	else cout << "nagative number or zero" << endl;
	
	return 0;
}
