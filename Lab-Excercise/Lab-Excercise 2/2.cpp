#include <iostream>
using namespace std;

int main()
{
	int a[3] = {
		10, 11, 12
	};
	int * b;
	
	b = &a[0];
	
	cout << "Address b = " << b << endl;
	cout << "b points to content = " << *(b) << endl;
	cout << "b=1 points to content = " << *(b+1) << endl;
	
	return 0;
}