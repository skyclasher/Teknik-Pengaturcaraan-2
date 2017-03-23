#include<iostream>
using namespace std;

void showVal(int List[],int size)
{
	for(int i=0; i<size; i++){
		cout << List[i] << " ";
	}
	cout << endl;
}

void showOneVal(int number)
{
	cout << number << endl; 
}

int main()
{
	int arry[4] = {
		3,5,7,9
	};
	
	showVal(arry,4);
	showOneVal(arry[2]);
}
