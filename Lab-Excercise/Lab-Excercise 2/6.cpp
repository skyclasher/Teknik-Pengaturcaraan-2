#include <iostream>
using namespace std;

int main()
{
	int i, num;
	int * id;
	
	cout << "Enter number of student : ";
	cin >>num;
	
	id = new int[num];
	for(i=0;i<num;i++){
		cout << "Enter student ID : ";
		cin >> id[i];
	}
	
	for(i=0;i<num;i++){
		cout << "Id for student number " << (i+1) << " : ";
		cout << id[i] << endl;
	}
	
	delete [] id;
		
	return 0;
}