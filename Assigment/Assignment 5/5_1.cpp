#include<iostream>
using namespace std;

int main()
{
	char choices; 
	
	do{
	
		cout << "Do you want to repeat the program or quit ? Press R to repeat or Q to quit." << endl;
		cin >> choices;
	
		choices = toupper(choices);
	
		if(choices != 'R' && choices != 'Q'){
			cout << "You have not entered correct command." << endl;
			choices = 'R';
		}
	
		if(choices == 'Q'){
			break;
		}	
	}while(choices == 'R');
  
	return 0;
}