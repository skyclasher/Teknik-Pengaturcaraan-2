#include <fstream>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

struct student {
	char firstName[15], sirName[15], answer[25];
	long int metric;
	int mark;
	char grade;
};

char schAnswers[] = {
	"BACDACBDABBACADAABACABCDA"
};

int num = 0;

void calcMark(student tp2[]);
void assignGrade(student p[]);

int main () {
	student tp2[25];
	ifstream file;
	ofstream outfile;
	file.open("student.dat");
 	outfile.open ("result.txt");
	
	if(file.fail()){
		cerr << "Fail to open file student.dat" << endl;
		exit(-1);
	}
	
	while(file>>tp2[num].firstName){
		file >> tp2[num].sirName;
		file >> tp2[num].metric >> tp2[num].answer;
		num++;
	}
	
	calcMark(tp2);
	assignGrade(tp2);
	
	cout << "\n" << setw(11) << "NAME" << setw(15) << "MARK" << setw(11) << "GRADE  \n\n";
	outfile << "     NAME             MARK    GRADE" << "\r\n";
	
	for(int i=0;i<num;i++){
		cout << setw(8) << tp2[i].firstName << setw(8) << tp2[i].sirName << setw(8) << tp2[i].mark << setw(8) << tp2[i].grade << "\n";
	  	outfile << tp2[i].firstName << "  " << tp2[i].sirName << "\t\t\t" << tp2[i].mark << "\t\t" << tp2[i].grade << "\r\n";
	}
	
	file.close();
 	outfile.close();
	
	return 0;
}

void calcMark(student tp2[]){
	int i,j;
		
	for(int i=0; i<num; i++){
		tp2[i].mark = 0;
		for (int j=0; j<25; j++){
			if (tp2[i].answer[j] == schAnswers[j]){
				tp2[i].mark += 4;
			}else{
				tp2[i].mark -= 1;
			}
		}
	}
}

void assignGrade(student tp2[]){
		
	for(int i=0; i<num; i++){
		if (tp2[i].mark >= 75) {
			tp2[i].grade = 'A';
		}else if(tp2[i].mark >= 65 && tp2[i].mark <= 74) {
			tp2[i].grade = 'B';
		}else if(tp2[i].mark >= 55 && tp2[i].mark <= 64){
			tp2[i].grade = 'C';
		}else if(tp2[i].mark >= 45 && tp2[i].mark <= 54){
			tp2[i].grade = 'D';
		}else{
			tp2[i].grade = 'E';
		}
	}
}