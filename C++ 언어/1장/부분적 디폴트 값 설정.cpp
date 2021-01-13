#include <iostream>

using namespace std;

int BoxVolume(int length, int width = 1, int height = 1);

int main(void){
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;//BoxVolume(3,3,3)
	cout << "[5, 5, 1] : " << BoxVolume(5, 5) << endl;//BoxVolume(5,5,1)
	cout << "[7, 1, 1] : " << BoxVolume(7) << endl;//BoxVolume(7,1,1)
	//cout << "[?, 1, 1] : " << BoxVolume() << endl;//BoxVolume(?,1,1)ÀÌ¹Ç·Î error
	
	return 0; 
}

int BoxVolume(int length, int width, int height){
	return length * width * height;
}
