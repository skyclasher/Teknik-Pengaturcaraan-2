#include <iostream>
#include <iomanip>
using namespace std;

void getSales(double *, int);
double totalSales(double *, int);

int main()
{
	const int QTRS = 4;
	double sales[QTRS];
	
	getSales(sales,QTRS);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the year are $";
	cout << totalSales(sales, QTRS) << endl;
		
	return 0;
}

void getSales(double *array, int size)
{
	for(int count=0; count < size; count++){
		cout << "Enter the sales figure for quaters ";
		cout << (count+1) << " : ";
		cin >> array[count];
	}
}

double totalSales(double *array, int size)
{
	double sum =0.0;
	for(int count=0; count<size; count++){
		sum += *array;
		array++;
	}
	return sum;
}