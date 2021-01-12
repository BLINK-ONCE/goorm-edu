#include <iostream>

using namespace std;

inline int SQUARE(int x){
	return x*x;
}

int main(void){
	cout << SQUARE(5) << endl;
	cout << SQUARE(7.15) << endl;//7.15를 7로 간주함. 데이터 손실
	
	return 0; 
}
