#include <iostream>
using namespace std;

int main()
{
	int aint [6] = {
		11,22,33,44,55,66
	};
	int *pint;
	
	for (int i=0;i<6;i++) {
		cout << aint[i] << endl;
	}
	
	pint = aint+2;
	
	cout << "**" << *(pint++)<<endl;
	cout << "**" << *(pint+2)<<endl;
	cout << "**" << *(pint)+2<<endl;
	cout << "**" << *(pint-=2)<<endl;
		
	return 0;
}