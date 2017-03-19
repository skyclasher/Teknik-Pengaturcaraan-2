#include <iostream>
using namespace std;

int main()
{
	int *iptr;
	iptr = new int;
	*iptr = 50;
	
	cout << "The address of iptr : " << iptr << endl;
	cout << "The value of *iptr : " << *iptr << endl;
		
	return 0;
}