#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string ic_number , year;
	int c_year, i_buffer, i_date2;
	
	cout << "Enter your IC number : ";
	getline(cin,ic_number);
	
	year = ic_number.substr(0,2);
	
	stringstream ss;
	ss << year;
	ss >> c_year;
	
	
	struct tm  tm;
	time_t rawtime;
	time ( &rawtime );
	tm = *localtime ( &rawtime );
	tm.tm_year = c_year;
	mktime(&tm);
	
	char *date2[10];
	strftime(*date2,10, "%Y", &tm);
	
	time_t rawtimes;
	struct tm * timeinfo;
	char *buffer [10];
	time (&rawtimes);
	timeinfo = localtime (&rawtimes);
	strftime (*buffer,10,"%Y",timeinfo);
	
	i_buffer = atoi(*buffer);
	i_date2 = atoi(*date2);
	
	cout << "Your IC Number is : " << ic_number << endl;
	cout << "Your Year of birth is : " << *date2 << endl;
	cout << "Your current age is : " << i_buffer - i_date2 << endl;
  
	return 0;
}