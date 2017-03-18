#include <iostream.h>
#include <iomanip>
using namespace std;

int main() {
	int x , y , z;
	double result;
	
	cout << "Enter value x : ";
	cin >> x;
	cout << "Enter value y : ";
	cin >> y;
	cout << "Enter value z : ";
	cin >> z;
	
	if(x <= z){
		result = x + z;
		cout << "x + z : " << result << endl;
	}else{
		if(x > z && y >z){
			result = x + y;
			cout << "x + y : " << result << endl;
		}else{
			cout << "Do not evaluate" << endl;
		}
	}
   	return 0;
}