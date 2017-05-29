// Program 4
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	 float *monthSales; // a pointer used to point to an array
	 // holding monthly sales
	 float total = 0; // total of all sales
	 int numOfSales; // number of sales to be processed
	 int count; // loop counter
	 cout << fixed << showpoint << setprecision(2);
	 cout << "How many monthly sales will be processed? ";
	 cin >> numOfSales;
	//(a) To allocate memory for the array pointed to by monthSales.
	 monthSales = new float [numOfSales]; // [2m]
	//(b)Fill in condition to determine if memory has been allocated
	 if ( !(monthSales  = new float )) // [1m]
	 {
		 cout << "Error allocating memory!\n";
		 return 1; 
	 }
	 cout << "Enter the sales below\n";
	 for ( count = 0; count < numOfSales; count++)
	 {
		//(c) Fill in code to show the number of the month
	 	cout << "Sales for Month number " << count + 1; // [1m]
		
		//(d) Fill in code to bring sales into an element of the array
	 	cin >> monthSales[count]; // [1m] 
	 }
	for (count = 0; count < numOfSales; count++)
	{
		total = total + monthSales[count];
	}
	cout << total;
 
	//(e) Fill in the code to deallocate memory assigned to the array.
	delete [] monthSales;  // [1m]
	return 0; 
 }