#ifndef COMPUTE_H
#define COMPUTE_H
#include <math.h>
#include <iostream>
using namespace std;

class Compute
{
	private:
		double a, b, c, discriminant;
		double calcDiscriminant(){
			return (b*b) - (4*(a*c));
		}
	public:
		Compute (double x, double y, double z){
			a = x;
			b = y;
			c = z;
			discriminant = calcDiscriminant();
			cout << discriminant;
		}
		double positive_root();
		double negative_root();
};
double Compute::positive_root(){
	return ((-b + (pow(discriminant,0.5))) / (2*a));
};
double Compute::negative_root(){
	return ((-b - (pow(discriminant,0.5))) / (2*a));
};
#endif