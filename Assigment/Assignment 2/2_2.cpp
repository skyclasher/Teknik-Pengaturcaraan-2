#include <iostream>
#include <string>
using namespace std;

int main() {
	string convert;
	int rmvalue, selection;
	double result;
	char newConversion = 'y';
	char newSelection = 'y';
	
	while(newConversion == 'y'){
		newSelection = 'y';
		cout << "Please enter Ringgit Malaysia to be converted: ";
		cin >> rmvalue;
		
		cout << "Conversion method:- " << endl;
		cout << "1 - US Dollar" << endl;
		cout << "2 - British Pound" << endl;
		cout << "3 - Singapore Dollar" << endl;
		cout << "4 - Australian Dollar" << endl;
		cout << "5 - Indonesian Rupiah" << endl;
		cout << "6 - Saudi Riyal" << endl;
		
		while(newSelection == 'y'){
			cout << "Plese enter conversion number :";
			cin >> selection;
			
			switch(selection){
				case 1 : convert = "USD";
						 result = rmvalue * 0.27600;
						 break;
				case 2 : convert = "GBP";
		  				 result = rmvalue * 0.18433;
						 break;
				case 3 : convert = "SGD";
		  				 result = rmvalue * 0.42051;
						 break;
				case 4 : convert = "AUD";
		  				 result = rmvalue * 0.43506;
						 break;
				case 5 : convert = "IDR";
						 result = rmvalue * 3361.70;
						 break;
				case 6 : convert = "SAR";
		  				 result = rmvalue * 1.03623;
						 break;
			}
			
			cout << "MYR " << rmvalue << " = " << convert << " " << result << endl;
			cout << "Do you want to convert to other conversion enter ? ('y' for yes): ";
			cin >> newSelection;
		}
		cout << "Do you want to do another conversion ? ('y' for yes): ";
		cin >> newConversion;
		
	}
   	return 0;
}