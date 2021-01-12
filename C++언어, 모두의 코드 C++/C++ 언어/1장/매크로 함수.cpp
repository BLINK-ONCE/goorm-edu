#include <iostream>
#define SQUARE(x) ((x)*(x))

using namespace std;

int main(void){
	cout << SQUARE(5) << endl;//int형에 적용 
	cout << SQUARE(2.7) << endl;//double형에 적용
	
	return 0; 
}
