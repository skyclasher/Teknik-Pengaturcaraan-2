#include <iostream>
using namespace std;

int main()
{
	int x=25, y=100;
	int *ptr1;
	int *ptr2 = &y;
	
	ptr1 = &x;
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr1 << endl;
	cout << "The value in y is " << y << endl;
	cout << "The address of y is " << ptr2 << endl;
	
	ptr2 = ptr1;
	
	cout << "****After the redirection" << endl;
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr1 << endl;
	cout << "The value in y is " << y << endl;
	cout << "The address of y is " << ptr2 << endl;
	
	*ptr1 = 222;
	
	cout << "****Changed value" << endl;
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr1 << endl;
	cout << "The value in y is " << y << endl;
	cout << "The address of y is " << ptr2 << endl;
		
	return 0;
}