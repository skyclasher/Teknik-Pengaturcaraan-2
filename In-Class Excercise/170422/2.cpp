#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
	Rectangle box;
	
	cout << "Here is the rectangle data:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
}