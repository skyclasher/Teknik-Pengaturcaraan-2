#include <algorithm>
#include<iostream>
using namespace std;

int main()
{
	char choice = 'y';
	char firstname[50];
	char matrix[50];
	char course[50];
	char combine[150];
	
	while(choice == 'y' || choice == 'Y'){
		string word = "";
		
		cout << "Please enter your first name : ";
		cin >> firstname;
		
		cout << "Please enter your matrix number : ";
		cin >> matrix;
		
		cout << "Please enter your course : ";
		cin >> course;
		
		
		cout << firstname << " " << matrix << " "<< course  << endl;
		
		strcpy(combine,firstname); 
		strcat(combine," - "); 
		strcat(combine,matrix); 
		strcat(combine," - "); 
		strcat(combine,course); 
		
		
		for (int i=0; i < 150; i++)
		{
		   combine[i] = toupper(combine[i]);
		}
		
		cout << combine << endl;
		
		
		cout << "Do you want to continue ? (Y to continue) : ";
		cin >> choice;
	}	
  
	return 0;
}