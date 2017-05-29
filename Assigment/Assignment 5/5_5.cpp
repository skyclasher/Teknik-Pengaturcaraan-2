#include <algorithm>
#include<iostream>
using namespace std;

void getData(string word);

int main()
{
	char choice = 'y';
	int count = 0;
	while(choice == 'y' || choice == 'Y'){
		count++;
		string word = "";
		
		cout << "Please enter word beautiful : ";
		if(count>1)
			cin.get();
		getline(cin,word);
		
		getData(word);
		
		cout << "Do you want to continue ? (Y to continue) : ";
		cin >> choice;
	}	
  
	return 0;
}

void getData(string word)
{
	std::transform(word.begin(), word.end(),word.begin(), ::tolower);
	
	if (word != "beautiful"){
		cout << "The program will acccept 'beautiful' word only" << endl;
		return;
	}
	
	for (int x = word.length()-1; x >=0; x--){
	   cout << word[x]; 
	}
	cout << endl;
}