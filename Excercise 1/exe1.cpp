#include <iostream.h>
#include <iomanip>
using namespace std;

int main() {
	double ctemp , ftemp;

	cout << "Enter the temperature in unit celcius : ";
	cin >> ctemp;
	
	ftemp = (9/5) * ctemp + 32;
	cout << "Temperature in Farenheit is : " << ftemp;
	
	if (ftemp < 60) {
		cout << " Cold\n";
	}else if (ftemp <= 80){
		cout << " Warm\n";
	}else{
		cout << " Hot\n";
	}
	
   	return 0;
}