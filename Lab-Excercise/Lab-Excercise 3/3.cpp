#include <iostream>
using namespace std;

int readCoin();
void calcCoins(int&,int);
int calcBalance(int);

int main () {
	int coinIn, totalCoins=0;
	cout << "*****GELAS BESAR SOYA DRINK**********" << endl;
	while(totalCoins < 120) {
		coinIn = readCoin();
		calcCoins(totalCoins,coinIn);
	}
	
	if(totalCoins>120){
		cout << "Balance :" << calcBalance(totalCoins) << endl;
	}
	cout << "Terima Kasih" << endl;
	
	return 0;
}

int readCoin(){
	int coin;
	cout << "Insert Coins. (5, 10, 20 or 50 cents only)" << endl;
	cin >> coin;
	 
	return coin;
}

void calcCoins(int &total,int coinIn){
	enum Coins {
		sen5 = 5, sen10 = 10, sen20 = 2*sen10, sen50 = sen5*sen10
	};
	
	switch(coinIn){
		case 5  : total += sen5;
		break;
		case 10 : total += sen10;
		break;
		case 20 : total += sen20;
		break;
		case 50 : total += sen50;
		break;
		default : cout << "Please insert coin 5, 10, 20, or 50 cent" << endl;
		break;
	}
}

int calcBalance(int coins){
	int balance;
	balance = coins - 120;
	return balance;
}