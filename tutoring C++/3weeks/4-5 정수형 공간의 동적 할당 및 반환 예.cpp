#include <iostream>
using namespace std;


int main(void) {
	int* p;

	p = new int;//int type 1�� �Ҵ�
	//p�� NULL�� ���� �޸𸮰� �Ҵ���� ���� ���̹Ƿ�.
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;//�Ҵ� ���� �޸� ��ȯ. delete �����ͺ���
}
