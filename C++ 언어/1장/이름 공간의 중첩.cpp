#include <iostream>

using namespace std;

namespace Parent{
	int num = 0;
	namespace Son{
		int num = 1;
	}
	namespace Daughter{
		int num = 2;
	}
}

int main(void){
	cout << Parent::num << endl;
	cout << Parent::Son::num << endl;
	cout << Parent::Daughter::num << endl;
	
	return 0;
}
