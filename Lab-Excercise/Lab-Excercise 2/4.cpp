#include <iostream>
using namespace std;

void function2(double [], int);

int main()
{
	double c[5] = {
		2.1, 4.3, 6.5, 8.7, 10.9
	};
	
	function2(c,5);
	
	return 0;
}

void function2(double b[], int num)
{
	for (int i=0; i<num; i++){
		*(b+i) *= 10;
		cout << *(b+i) << endl;
	}
}