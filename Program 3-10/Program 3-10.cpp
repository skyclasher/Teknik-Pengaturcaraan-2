#include <iostream.h>
using namespace std;

int main() {
	int books;
	int months;
	double perMonths;

	cout << "How many book so you plan to read ? ";
	cin >> books;
	cout << "How many months will it take you to read them ? ";
	cin >> months;
	
	perMonths = static_cast<double>(books) / months;
	
	cout << "That is " << perMonths << " books per month.\n";
   	return 0;
}