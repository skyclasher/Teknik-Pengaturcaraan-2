#include<iostream>
#include<iomanip>
using namespace std;

void getData();
int calculateData(int,int);

int Pasukan[3][4];

int main()
{
	getData();
	
	int point = 0;
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			point += calculateData(Pasukan[j][i] , j);	
		}
		cout << "Team " << i+1 << " points : " << point << endl;	
		point = 0;
	}
}

int calculateData(int count, int j)
{
	int point = 0;
	switch(j){
		case 0 : point = 3;
				 break;
		case 1 : point = 2;
				 break;  
		case 2 : point = 1;
				 break;
	}
	
	return point * count;
}

void getData()
{
	cout << "Please enter the medal count :" << endl;
	
	for(int j=0; j<4; j++){
		cout << "Team " << j+1 << " :- " << endl;	
		for(int i=0; i<3; i++){
			switch(i){
				case 0 : cout << "Gold : ";	
						 cin >> Pasukan[i][j];
						 break;
				case 1 : cout << "Silver : ";	
						 cin >> Pasukan[i][j];
						 break;  
				case 2 : cout << "Bronze : ";	
						 cin >> Pasukan[i][j];
						 break;
			}
		}
		cout << endl;
	}	
}
