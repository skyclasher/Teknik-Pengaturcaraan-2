#include<iostream>
using namespace std;

int main()
{
	int num = 12;
	int value[] = {
		2,4,12,8
	};
	int *ptrnum, *ptrvalue;
	
	ptrnum = &num;
	ptrvalue = value;
	
	cout << "num : " << num << endl;
	cout << "ptrnum : " << ptrnum << endl;
	cout << "ptrnum : " << ptrnum << endl;
	cout << "value : ";
	
	for(int i=0;i<4;i++){
		cout << value[i] << " ";
	}
	cout << endl;
	
	cout << "value[2] : " << ptrvalue[2] << endl;;
	
	for(int i=0;i<4;i++){
		if(*ptrnum == ptrvalue[i]){
			ptrvalue[i] = ptrvalue[i] + 5;
		}
		cout << ptrvalue[i] << " ";
	} 
	cout << endl;
	cout << "Length of array = " << sizeof(*ptrvalue) << endl;
}