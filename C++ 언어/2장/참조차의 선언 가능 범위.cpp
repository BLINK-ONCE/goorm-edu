#include <iostream>

using namespace std;

int main(void){
	//아래와 같은 선언은 잘못된 선언이다. 
	//int& ref = 20; int& ref; int& ref = NULL; 
	int arr[3] = {1,2,3};
	
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];
	
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[1];
	int* ptr3 = &arr[2];
	
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	
	cout << ptr1 << endl;
	cout << ptr2 << endl;
	cout << ptr3 << endl;
	
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << *ptr1 << endl;
}
