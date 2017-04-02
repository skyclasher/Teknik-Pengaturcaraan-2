#include<iostream>
#include<fstream>
#include <cctype>

using namespace std;

int main()
{
	const int SIZE=51;
	char fileName[SIZE];
	char ch;
	ifstream inFile;
	
	ofstream outFile ("out.txt");
	
	cout<<"Enter a file name: ";
	cin >> fileName;
	
	inFile.open(fileName);
	if(!inFile)
	{
		cout<<"Can't Open "<<fileName<<endl;
		return 0;
	}
	
	inFile.get(ch);
	while(!inFile.eof())
	{
		outFile.put(toupper(ch));
		inFile.get(ch);
	}
	
	inFile.close();
	outFile.close();
	cout<<"File conversion done.\n";
	return 0;



}