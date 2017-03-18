#include <iostream.h>
using namespace std;

int main() {
	int age;
	
	cout << "Please enter student`s age: ";
	cin >> age;
	
	if(age == 0){
		cout << "No educational background" << endl;
	}else if (age >= 1 && age <= 6){
		cout << age << ", pre-school level\n";
	}else if (age > 6 && age <= 12){
		cout << age << ", primary school level\n";
	}else if (age > 12 && age <= 17){
		cout << age << ", secondary school level\n";
	}else if (age > 17){
		cout << age << ", university level\n";
	}else{
		cout << "Bad data: " << age << endl;
	}
   	return 0;
}