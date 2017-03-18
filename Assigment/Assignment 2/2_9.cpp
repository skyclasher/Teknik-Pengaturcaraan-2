#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

double openAccount();
void displayBalance(double bal);
void withdrawMoney(double bal);
void updateAccount(double bal);

int main() {
	int choice;
	int number = 2;
	
	while(number > 1){
		double bal = openAccount();
		
		cout << "Welcome" << endl;
		cout << "1 - Display balance" << endl;
		cout << "2 - Withdraw money" << endl;
		cout << "3 - Exit" << endl;
		cout << "Enter a choice : " << endl;
		cin >> choice;
		
		while(choice < 1 || choice > 3){
			cout << "Invalid Input. Please reenter choice (1 - 3) : ";
			cin >> choice;
		}
		
		switch(choice){
			case 1 : displayBalance(bal);
					 break;
		 	case 2 : withdrawMoney(bal);
				     break;
	   		case 3 : updateAccount(500);
	   				 number = 1;
				     break;
		}
		
		cout << endl << endl;
	}
   	return 0;
}

double openAccount(){
	double bal = 0;
	ifstream infile;
	infile.open("account.txt");
	
	if(!infile){
		cout << "Error opening file\n";
	}else{
		infile >> bal;
	}
	infile.close();
	return bal;
}

void displayBalance(double bal){
	cout << "Account Balance : " << bal << endl;
}

void withdrawMoney(double bal){
	double userWithdraw, balResult;
	
	cout << "Enter amount to be withdraw (<= " <<  bal << ") :";
	cin >> userWithdraw;
	
	while(userWithdraw >= bal){
		cout << "Insuffiecient balance. Please reenter amount (<= " << bal << ") :";
		cin >> userWithdraw;
	}
	
	balResult =  bal - userWithdraw;
	
	updateAccount(balResult);
}

void updateAccount(double bal){
	ofstream outfile;
	outfile.open("account.txt");
	
	if(!outfile){
		cout << "Error opening file\n";
	}else{
		outfile << bal;
	}
	outfile.close();
}