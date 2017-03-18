#include<iostream>
using namespace std;


int main(){

	const int SIZE = 5;
	int firstArray[SIZE] = { 5, 10, 15, 20, 25 };
	int secondArray[SIZE] = { 5, 10, 15, 20, 25 };
	bool arraysEqual = true; // Flag variable
	int count = 0;           // Loop counter variable
	// Compare the two arrays.
	while (arraysEqual && count < SIZE)
	{
	   if (firstArray[count] != secondArray[count])
	      arraysEqual = false;   
	   count++;
	}
	if (arraysEqual)
	   cout << "The arrays are equal.\n";
	else
	   cout << "The arrays are not equal.\n";

}