#include<iostream>
using namespace std;

int *getStudentsID(int);

int main()
{
	int size;
	
	cout << "Enter studenr count :";
	cin >> size;

  	int *ptrstudentID = new int[size];
	
	ptrstudentID = getStudentsID(size);
	
	for(int count =0;count < size; count++){
		cout << ptrstudentID[count] <<endl;
	}
  	
  	delete[] ptrstudentID;
  	
	return 0;
}

int *getStudentsID(int studentNum)
{
	
  	int *ptrstudentID = new int[studentNum];
	
	for(int count =0;count < studentNum; count++){
		cout << "Enter student ID : ";
		cin >> ptrstudentID[count];
	}
	return ptrstudentID;
  	delete[] ptrstudentID;
}