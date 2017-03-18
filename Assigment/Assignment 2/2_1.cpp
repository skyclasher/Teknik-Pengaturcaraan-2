#include <iostream>
using namespace std;

int main() {
	int hours, minutes, seconds;
	
	cout << "Please enter hours: ";
	cin >> hours;
	
	while(hours < 0 || hours > 12){
		cout << "Invalid input. Hours must be >= 0 and <= 12 : ";
		cin >> hours;
	}
	
	cout << "Please enter minutes: ";
	cin >> minutes;
	
	while(minutes < 0 || minutes > 59){
		cout << "Invalid input. Minutes must be >= 0 and <= 59 : ";
		cin >> minutes;
	}
	
	cout << "Please enter seconds: ";
	cin >> seconds;
	
	while(seconds < 0 || seconds > 59){
		cout << "Invalid input. Seconds must be >= 0 and <= 59 : ";
		cin >> seconds;
	}
	
	cout << "Time entered : " << hours << ":" << minutes << ":" << seconds << endl;
	
   	return 0;
}