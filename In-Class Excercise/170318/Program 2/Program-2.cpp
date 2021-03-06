#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main(){
	double ctemp, ftemp;
	fstream infile;
	
	infile.open("data5b.txt");
	if(infile.fail()){
		cerr << "File Does Not Exist\n";
		return 0;
	}
	
	while(!infile.eof()){
		infile >> ctemp;
		ftemp = (9/5)*ctemp+32;
		cout << ctemp << "\t" << ftemp;
		if(ftemp < 60){
			cout << "\tCold\t\n";
		}else if(ftemp <= 80){
			cout << "\tWarm\t\n";
		}else{
			cout << "\tHot\t\n";
		}
	}
	infile.close();
	return 0;
}