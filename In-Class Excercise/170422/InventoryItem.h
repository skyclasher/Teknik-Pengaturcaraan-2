#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>

class InventoryItem
{
	private:
		char *description;
		double cost;
		int units;
		
	public:
		InventoryItem(char *desc, double c, int u)
		{
			description = new char[strlen(desc) + 1];
			strcpy(description,desc);
			cost = c;
			units = u;
		}
		
		~InventoryItem() { delete [] description; }
		const char *getDescription() const { return description; }
		double getCost() const{ return cost; }
		int getUnits() const{ return units; }
};
#endif