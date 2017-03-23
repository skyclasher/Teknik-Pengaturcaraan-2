#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	int count = 0;
	double result, number;
	fstream infile;
	ofstream outfile;
	
	infile.open("number.dat");
 	outfile.open ("result.txt");
	if(infile.fail()){
		cerr << "File Does Not Exist\n";
		return 0;
	}

	cout << "Reading the files..." << endl;

	while(!infile.eof()){
		count++;
		infile >> number;
		
		if (count == 1){
			cout << "Generating the output in screen and in result.txt..." << endl << endl;	
			cout << "N  Number  Number x Number" << endl;	
	  		outfile << "N  Number  Number x Number" << "\r\n";
		}	
		
		cout << count << "  " << number << "     " << number * number << endl;
		
	  	outfile << count << "  " << number << "     " << number * number << "\r\n";
	}
	infile.close();
 	outfile.close();
	return 0;
}