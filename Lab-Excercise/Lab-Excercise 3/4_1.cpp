#include <iostream>
using namespace std;

int main () {
	struct nombor {
		char x[2];
		int y;
	};
	
	nombor nilai = {
		"A"
	};
	
	cout << "Structure size : " << sizeof(nilai) << endl;
	cout << "Content - char : " << nilai.x<< endl;
	cout << "y - Start address : " << &nilai.x << endl;
	
	nilai.y= 12;
	cout << "Structure size : " << sizeof(nilai) << endl;
	cout << "Content - char : " << nilai.y<< endl;
	cout << "y - Start address : " << &nilai.y << endl;
	
	return 0;
}