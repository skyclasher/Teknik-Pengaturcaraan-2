#include<iostream>
using namespace std;

int main()
{
	int myArray[8];
	
	for(int c = 7;c > 2;c--){
		myArray[c] = c * 4;
	}
	
	for(int p = 3;p < 7;p++){
		cout << myArray[p] << " ";
	}
}