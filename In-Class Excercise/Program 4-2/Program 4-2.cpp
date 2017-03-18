#include <iostream.h>
#include <iomanip>
using namespace std;

int main() {
	int score1 , score2 , score3;
	double average;

	cout << "Enter 3 test score and i will average them (seperated by space) : " << endl;
	cin >> score1 >> score2 >> score3;
	
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(2);
	cout << "Your average is " << average << endl;
	
	if(average > 95){
		cout << "Congratulation: Thas a high score!\n";
	}
   	return 0;
}