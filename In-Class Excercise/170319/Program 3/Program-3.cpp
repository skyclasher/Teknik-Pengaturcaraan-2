#include <iostream>
using namespace std;

int main()
{
	int numbers[] = {
		10,20,30,40,50	
	};
	
	int *valnumbers = numbers;
	
	for(int i = 0; i < 5; i++){
		cout << "Element-" << i << " : " << *(valnumbers+i) << endl;	
	}
	
	return 0;
}