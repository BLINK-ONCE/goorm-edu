#include <iostream>

using namespace std;

class Transaction{
	public:
		void init(int amount);
		
		void send(int amount);
		
		void receive(int amount);
		
		void getSum();
		
	private:
		int sum;
};

void Transaction::init(int amount) {
	sum = amount;
};
		
void Transaction::send(int amount){
	sum -= amount;
};

void Transaction::receive(int amount){
	sum += amount;
};

void Transaction::getSum(){
	cout << sum << endl;
};


int main(void){
	Transaction A, B;
	
	A.init(1000);
	B.init(2000);
	
	int amount = 500;
	A.send(amount);
	B.receive(amount);
	
	A.getSum();
	B.getSum();
	
	return 0;
}
