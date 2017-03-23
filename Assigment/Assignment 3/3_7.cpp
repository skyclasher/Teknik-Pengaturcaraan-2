#include<iostream>
#include<iomanip>
using namespace std;

void bacaData();
double kiraMarkah(int);

double Pelajar[5][3];

int main()
{
	double totalMarks;
	
	bacaData();
	
	double studentMarks, totalmarks = 0;
	for(int i=0; i<5; i++){
		cout << "Markah Student " << i + 1 << " :";
		studentMarks = kiraMarkah(i);
		cout << studentMarks << endl;
		totalmarks += studentMarks;
	}
	
	cout << endl << endl<< "Jumlah Markah : " << totalmarks << endl;
}

void bacaData()
{
	cout << "Please enter the quiz data (separeted by enter) for each student :" << endl;
	
	for(int i=0; i<5; i++){
		cout << "Student " << i + 1 << " :" << endl;
		for(int j=0; j<3; j++){
			cin >> Pelajar[i][j];
		}
	}
	
	cout << endl << endl << "Output : " << endl;	
	
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout << Pelajar[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
}

double kiraMarkah(int i)
{
	return Pelajar[i][0] + Pelajar[i][1] + Pelajar[i][2];
}