#include <iostream>
using namespace std;


int main(void) {
	int* p;

	p = new int;//int type 1개 할당
	//p가 NULL일 경우는 메모리가 할당되지 않은 것이므로.
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;//할당 받은 메모리 반환. delete 포인터변수
}
