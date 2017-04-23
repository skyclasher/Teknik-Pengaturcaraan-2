#include "lecturer.h"
#include <iostream>
#include <string>
using namespace std;

const int COURSE_SIZE = 51;

class Course
{
	private:
		Lecturer *pensyarah;
		char courseName[COURSE_SIZE];
		
	public:
		Course(const char *course)
		{
			strncpy(courseName, course, COURSE_SIZE);
			courseName[COURSE_SIZE-1] = '\0';
		}
		
		void addlecturer();
		void removelecturer();
		void print();
};

void Course::addlecturer()
{
	pensyarah = new Lecturer;
	pensyarah->set("Radziah","Mohamad","N28-326");
}

void Course::removelecturer()
{
	delete pensyarah;
	pensyarah = NULL;
}

void Course::print()
{
	cout << "Course name: " << courseName << endl; 
	cout << "Lecturer Information: \n";
	pensyarah->print();
}

int main()
{
	Course tp2("Programming Technique II");
	tp2.addlecturer();
	tp2.print();
	tp2.removelecturer();
	
	return 0;
}