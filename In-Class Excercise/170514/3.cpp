#include "PassFailExam.h"
#include "iostream.h"
#include "iomanip.h"
using namespace std;

void displayGrade(Const GradedActivity &);

int main(){
	GradedActivity test1(88.0);
	PassFailExam test2(100, 25, 70.0);

	cout << "Test 1:\n ";
	displayGrade(test1);
	cout << "Test 2:\n ";
	displayGrade(test2);
	
	return 0;
}

void displayGrade(const GradedActivity &activity)
{
	cout << setprecision(1) << fixed;
	cout << "The activity numeric score is " << activity.getScore() << endl;
	cout << "The activity letter grade is " << activity.getLetterGrade() << endl;
}