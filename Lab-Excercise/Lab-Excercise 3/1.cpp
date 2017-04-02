#include <iostream>
using namespace std;

struct number {
	int num1;
	double num2;
	float num3;
};

int main () {
	number num = {
		4,6.5,2.7,
	};
	
	num.num2 += 5;
	num.num3= num.num2- num.num1;
	num.num1= 8;
	
	cout << num.num2 << " " << num.num1 << " " << num.num3 << endl;
	
	return 0;
}