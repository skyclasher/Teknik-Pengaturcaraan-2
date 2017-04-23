#ifndef LECTURER
#define LECTURER
#include <iostream>
#include <string>
using namespace std;

const int NAME_SIZE = 51;
const int OFFICE_NUM_SIZE = 21;

class Lecturer
{
	private:
		char lastName[NAME_SIZE];
		char firstName[NAME_SIZE];
		char officeNumber[OFFICE_NUM_SIZE];
		
	public:
		Lecturer(){ set("","",""); }
		Lecturer(char *fname, char *lname, char *office)
		{
			set(fname,lname,office);
		}
		
	void set(const char *fname, const char *lname, const char *office)
	{
		strncpy(firstName, fname, NAME_SIZE);
		firstName[NAME_SIZE-1] = '\0';
		
		strncpy(lastName, lname, NAME_SIZE);
		lastName[NAME_SIZE-1] = '\0';
	
		strncpy(officeNumber, office, OFFICE_NUM_SIZE);
		officeNumber[OFFICE_NUM_SIZE-1] = '\0';			
	}
	
	void print() const
	{
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Office Number: " << officeNumber << endl;
	}
};
#endif