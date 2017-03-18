#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout << "Enter a number for multiplication table (1-20): ";
	cin >> x;
	
	while(x < 1 || x > 21){	
		cout << "Invalid input. Please reenter number (1-20): ";
		cin >> x;
	}
	
	cout << "\n\nMultiplication Table " << endl;
	cout << "------------------------------" << endl;
	
	for(int i = 1; i < 13; i++){
		cout << i << " x " << x << " = " << i * x <<endl;
	}
	
   	return 0;
}