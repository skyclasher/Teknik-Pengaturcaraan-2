// Program 2
#include <iostream>
using namespace std;

int main()
{
	char chr1 = '%', chr2 = '$';
	char *pt1 = &chr1;
	char *pt2 = &chr2;
	char *pt3;
	
	/*cout << chr1 << endl;
	cout << chr2 << endl;
	cout << &chr1 << endl;
	cout << &chr2 << endl;
	cout << *pt1 << endl;
	cout << *pt2 << endl;
	cout << *pt3 << endl;
	cout << &pt1 << endl;
	cout << &pt2 << endl;
	cout << &pt3 << endl;
	cout << pt1 << endl;
	cout << pt2 << endl;
	cout << pt3 << endl << endl << endl;*/
	
	pt3 = &chr2;
	cout << "*pt3 = " << *pt3 << endl; 


	/*cout << &chr1 << endl;
	cout << &chr2 << endl;
	cout << *pt1 << endl;
	cout << *pt2 << endl;
	cout << *pt3 << endl;
	cout << &pt1 << endl;
	cout << &pt2 << endl;
	cout << &pt3 << endl;
	cout << pt1 << endl;
	cout << pt2 << endl;
	cout << pt3 << endl << endl << endl;*/

	pt3 = pt1;
	cout << "*pt3 = " << *pt3 << ", pt3 = " << pt3 << endl; 


	/*cout << &chr1 << endl;
	cout << &chr2 << endl;
	cout << *pt1 << endl;
	cout << *pt2 << endl;
	cout << *pt3 << endl;
	cout << &pt1 << endl;
	cout << &pt2 << endl;
	cout << &pt3 << endl;
	cout << pt1 << endl;
	cout << pt2 << endl;
	cout << pt3 << endl << endl << endl;*/
	
	*pt1 = *pt2;
	cout << "*pt1 = " << *pt1 << ", pt1 = " << pt1 <<endl; 

	/*cout << &chr1 << endl;
	cout << &chr2 << endl;
	cout << *pt1 << endl;
	cout << *pt2 << endl;
	cout << *pt3 << endl;
	cout << &pt1 << endl;
	cout << &pt2 << endl;
	cout << &pt3 << endl;
	cout << pt1 << endl;
	cout << pt2 << endl;
	cout << pt3 << endl << endl << endl;*/
 	return 0;
}