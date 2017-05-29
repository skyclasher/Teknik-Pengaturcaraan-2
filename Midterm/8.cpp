// Program 5
#include "Compute.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 	double a, b, c;
 	cout << "Enter coefficients a, b and c: ";
 	cin >> a >> b >> c;
 	// (a)Pass arguments a, b, c to the constructor
 	Compute obj(a,b,c);
 	cout << "The roots of the quadratic equation are x = ";
 	// (b)Execute function members to display the value x1
 	cout << obj.positive_root();
 	cout << ", ";
 	// (c)Execute function members to display the value x2
 	cout << obj.negative_root() << endl;
 	return 0; 
}