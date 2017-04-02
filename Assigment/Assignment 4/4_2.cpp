#include<iostream>
using namespace std;

int main()
{
	int i, size;

	cout << "Enter array size :";
	cin >> size;

  	int *ptrnumlist = new int[size];

	
	for(i=0;i<size;i++){
		cout << "Enter value #" << i+1 << " : ";
		cin >> ptrnumlist[i];
	}
	
	for(i=size;i>0;i--){
		cout << "Value #" << i << " : ";
		cout << ptrnumlist[i-1] << endl;
	}	
	
	delete [] ptrnumlist;
  
	return 0;
}