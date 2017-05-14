#include "CurvedActivity.h"
#include "iostream.h"
#include "iomanip.h"
using namespace std;

int main(){
	CurvedActivity exam;
	double numericScore , percentage;
	
	cout << "Enter the student`s raw numeric score: ";
	cin >> numericScore;
	
	cout << "Enter the curve percentage for this student: ";
	cin >> percentage;
	
	exam.setPercentage(percentage);
	exam.setScore(numericScore);
	
	cout << fixed << setprecision(2);
	cout << "The raw score is " << exam.getRawScore() << endl;
	cout << "The curved score is " << exam.getScore() << endl;
	cout << "The curved grade is " << exam.getLetterGrade() << endl;
	
}