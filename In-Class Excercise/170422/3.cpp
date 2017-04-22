#include "InventoryItem.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	InventoryItem stock("Wrench",8.75,20);
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Item Description: " << stock.getDescription() << endl;
	cout << "Cost: $" << stock.getCost() << endl;
	cout << "Units on hand: " << stock.getUnits() << endl;
	return 0;
}