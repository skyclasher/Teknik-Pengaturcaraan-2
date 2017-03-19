#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

int main()
{
	int d1,d2;
	cout << "Enter the row and column dimension : \n";
	cin >> d1 >> d2;
	
	IntArrayPtr *m = new IntArrayPtr[d1];
	int i, j;
	
	for(i=0;i<d1;i++){
		m[i] = new int[d2];
	}
	
	cout << "Enter " << d1 << " rows of " << d2 << " Integers each : \n";
	
	for(i=0;i<d1;i++){
		for(j=0;j<d2;j++){
			cin >> m[i][j];
		}
	}
	
	cout << "Echoing the tow-dimensional array : \n";
		
	for(i=0;i<d1;i++){
		for(j=0;j<d2;j++){
			cout << m[i][j] << " " << endl;
		}
	}
	
	for(i=0;i<d1;i++){
		delete[] m[i];
	}
	delete[] m;
	
	return 0;
}