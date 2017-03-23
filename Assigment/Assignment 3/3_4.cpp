#include<iostream>
using namespace std;

int main()
{
	int Array1[5],Array2[5];
	
	cout << "Please enter 2 number (seperated with spaces) in 5 row :"  << endl;
	
	for(int i=0;i<5;i++){
		cin >> Array1[i] >> Array2[i];
	}
	
	cout << endl << endl;
	cout << "Sum of the each row :"  << endl;
	
	for(int i=0;i<5;i++){
		cout << Array1[i] + Array2[i] << endl;
	}
}
