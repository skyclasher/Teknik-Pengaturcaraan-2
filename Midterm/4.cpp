// Program 3a
#include <iostream>
using namespace std;

double &getWeeklyHours();
double *getSalary();

int main()
{
	 double hours = getWeeklyHours();
	 double salary = *getSalary();
	 cout << "Weekly Hours: " << hours << endl;
	 cout << "Hourly Salary: " << salary << endl;
	 double weeklySalary = hours * salary;
	 cout << "Weekly Salary: " << weeklySalary << endl;
	 return 0;
}

double *getSalary()
{
	double salary = 26.48;
	double *hourlySalary = &salary;
	return hourlySalary;
}

double &getWeeklyHours()
{
	double n = 46.50; 
    	double &hours = n;
	return hours;

}