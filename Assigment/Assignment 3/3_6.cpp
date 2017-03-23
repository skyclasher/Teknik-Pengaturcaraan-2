#include<iostream>
using namespace std;

int main()
{
	int array[4][4], index1, index2;
	
	for(index1=0; index1<4; index1++){
		for(index2=0; index2<4; index2++){
			array[index1][index2] = index1 + index2;
		}
	}
	
	for(index1=0; index1<4; index1++){
		for(index2=0; index2<4; index2++){
			cout << array[index1][index2] << " ";
		}
	}
}
