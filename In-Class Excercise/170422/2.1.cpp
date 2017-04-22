#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}

void Rectangle::setLength(double len)
{
	if(len >= 0){
		length = len;
	}else {
		cout << "Invalid lenght\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setWidth(double w)
{
	if(w >= 0){
		width = w;
	}else {
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}