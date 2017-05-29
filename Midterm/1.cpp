// Program 1
#include <iostream>
#include <fstream> 
#include <string>
#include <stdlib.h> 
using namespace std;
int main()
{
	char name[31]; // d) declare c-string variables
	char ic[12]; // name, ic & stateName
	char stateName[20]; // with appropriate size. [1.5m]
	int stateCode;
	
	double monthlyIncome = 0.0;
	int numOfEmployee;
	ofstream out; // e) Declare the file variable for output file [0.5m]
	out.open("outfile.txt"); // f) Open output file named “outfile.txt” [0.5m]
	if (out.fail())// g) check if there is an error in opening file [0.5m]
	{ 
		cout << "Cannot open file" << endl;
	 	exit(1); 
 	}
	else
	{ 
		cout << "How many employees?: ";
	 	cin >> numOfEmployee; // Ask the user for the number of employee
		// h) Write the loop to read data for all employees [0.5m]
		for (int i = 0; i < numOfEmployee; i++)
		{ 
			cin.ignore();
		 	cout << "Enter name: " ;
	 		// i) read the employee[’s name [0.5m]
		 	cin.getline(name,31);
	
	 		cout << "IC: ";
	 		cin.ignore();
	 		// j) read the employee’s IC number [0.5m]
	 		cin >> ic;
 			cout << "State Code: ";
 			cin >> stateCode;
 			
	 		if (stateCode == 1) strcpy(stateName,"Johor");
			else if (stateCode == 2)strcpy(stateName, "Kedah");
	 		else if (stateCode == 3)strcpy(stateName, "Kelantan");
			else if (stateCode == 4)strcpy(stateName, "Melaka");
	 		else if (stateCode == 5)strcpy(stateName, "Negeri Sembilan");
	 		
			cout << "Monthly Income: ";
			cin >> monthlyIncome;
	
	 		out << name << endl << ic << endl << stateName << endl << monthlyIncome << endl;
	 	}
	}
	out.close(); // k) close the output file [0.5m]
	// l) Re-open the same file (i.e. “outfile.txt”) but this time
	// as an input file [0.5m]
	ifstream in;
	in.open("outfile.txt");
	char year[2], month[2], day[2];
	//m) check whether there is still data to read in [0.5m]
	while (!in.eof())
	{
		// n) read the employee’s IC number from the file [0.5m]
	 	in >> ic;
	 	// o) read stateName from the file [0.5m]
		in >> stateName;
	 	// p) read monthlyIncome from the file [0.5m]
	 	in >> monthlyIncome;
		cout << "name: " << name << " ic: " << ic << " State: " << stateName << " income: " << monthlyIncome << endl;
	 	// q) Read 2 digits from IC for day [0.5m]
		year[0] = ic[0];
		year[1] = ic[1];
	 	// r) Read 2 digits from IC for month [0.5m]
		month[0] = ic[2];
		month[1] = ic[3];
	 	// s) Read 2 digits from IC for Year [0.5m]
		day[0] = ic[4];
		day[1] = ic[5];
	 	cout << "Date of birth: " << day << " of " << month << "19" << year << endl;
		if (monthlyIncome < 5000) {
			cout << "Income less than RM5000" << endl;
			cout << " Name: " << name << " State: " << stateName << endl;
		}
	 	in.getline (name, 31); 
 	}
	
	in.close(); // close input file
	return 0; 
}