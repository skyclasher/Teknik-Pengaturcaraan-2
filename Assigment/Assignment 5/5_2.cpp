#include<iostream>
#include <string> 
#include <sstream>
using namespace std;

int main()
{
	stringstream ss;
	ss << 154;
	
	cout << ss.str() << endl;
  
	return 0;
}