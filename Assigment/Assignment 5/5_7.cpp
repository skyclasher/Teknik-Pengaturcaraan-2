#include <algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	char choice = 'y';
	string firstname;
	string matrix;
	string course;
	string combine;
	
	while(choice == 'y' || choice == 'Y'){
		
		cout << "Please enter your first name : ";
		cin.get();
		getline(cin,firstname);
		
		cout << "Please enter your matrix number : ";
		cin.get();
		getline(cin,matrix);
		
		cout << "Please enter your course : ";
		cin.get();
		getline(cin,course);
		
		
		cout << firstname << " " << matrix << " "<< course  << endl;
		
		combine = firstname + " - " + matrix + " - " + course;
		
  		std::transform(combine.begin(), combine.end(),combine.begin(), ::toupper);
		
		cout << combine << endl;
		
		
		cout << "Do you want to continue ? (Y to continue) : ";
		cin >> choice;
	}	
  
	return 0;
}