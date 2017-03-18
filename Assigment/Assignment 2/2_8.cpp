#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int num1, num2, answer, userAnswer;
	char ucont;
	int points = 0;
	bool cont = true;
	
	while(cont){
		num1 = rand() % 50 + 1;
		num2 = rand() % 50 + 1;
		
		cout << num1 << " + " << num2 << " = ";
		cin >> userAnswer;
		
		answer = num1 + num2;
		if(answer == userAnswer){
			cout << "Congratulation your answer is correct. You got 1 point." << endl;
			points += 1;
		}else{
			cout << "Sorry, please try again later." << endl;
		}
		cout << "\nDo you want to continue ? Insert 'n' or 'N' to stop answer the question : ";
		cin >> ucont;
		cout << endl;
		
		if(ucont == 'n' || ucont == 'N'){
			cont = false;
		}
	}
	cout << "\nThank you for the answer. Your total points is : " << points << endl;
   	return 0;
}