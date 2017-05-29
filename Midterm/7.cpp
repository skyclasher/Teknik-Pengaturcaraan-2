#include "Bread.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float calculateTotal(Bread bread);

int main()
{
	Bread obj[4];
	string code;
	int qty;
	float ctotal;
	
	cout << "Please enter the information of bread: " << endl << endl;
	
	for(int i=0; i<4; i++)
	{
		cout << "\nBread #" << i+1;
		cout << "\nCode: ";
		cin >> code;
		cout << "Quantity: ";
		cin >> qty;
	 	obj[i].setCode(code); 
	 	obj[i].setQuantity(qty); 
	}	
	
	
	cout << "\n\n\nRecord of Daily Bread Sales" << endl << endl;
	cout << "No \t Bread Code \t Bread Name \t\t Price(RM) \t Quantity" << endl;
	for(int i=0; i<4; i++)
	{
		float price = obj[i].getPrice();
		cout << i + 1 << "\t " << obj[i].getCode() << "\t\t " << obj[i].getName() << "\t\t " << setprecision (2) << fixed << price << "\t " << obj[i].getQuantity() << endl;
		ctotal += calculateTotal(obj[i]);
	}
	
	cout << "\n\n Total daily sales: " << ctotal << endl;
}

float calculateTotal(Bread bread)
{
	return bread.getPrice() * bread.getQuantity();
}