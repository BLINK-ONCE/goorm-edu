#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() {
		a = 100; cout << a << ' ';
	}
	Sample(int x) {
		a = x; cout << a << ' ';
	}
	Sample(int x, int y) {
		a = x * y; cout << a << ' ';
	}
	int get() {
		return a;
	}
};

int main(void) {
	Sample arr[3];
	
	Sample* p = arr;
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		sum += p->get();//sum += (*p).get();
		p++;
	}
	cout << sum;
}
