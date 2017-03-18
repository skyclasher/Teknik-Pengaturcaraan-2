#include <iostream>
using namespace std;

int main() {
	int x;
	
	do{
		cout << "Enter a number: ";
		cin >> x;
		cout << (x*x) << endl;
	}while(x > 0);
	
   	return 0;
}