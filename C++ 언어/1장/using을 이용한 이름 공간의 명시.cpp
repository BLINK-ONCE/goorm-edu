#include <iostream>

using namespace std;

namespace Hybrid{
	void HybFunc(void){
		cout << "So simple function!" << endl;
		cout << "In namespace Hybrid" << endl;
	}
}

int main(void){
	using Hybrid::HybFunc;//이 라인 실행 후 namespace Hybrid는 생략 가능
	HybFunc();
	
	return 0; 
}
