#include <algorithm>
#include<iostream>
using namespace std;

int main()
{
	string choices; 
	
	cout << "TV1 - Channel 1" << endl;
	cout << "TV2 - Channel 2" << endl;
	cout << "TV3 - Channel 3" << endl;
	cout << "TV4 - Channel 4" << endl;
	cout << "TV5 - Channel 5" << endl;
	
	do{
		cout << "Please enter Channel - TV1,TV2,TV3,TV4,TV5 : ";
		getline(cin,choices);
		std::transform(choices.begin(), choices.end(),choices.begin(), ::toupper);
		
		if(choices != "TV1" && choices != "TV2" && choices != "TV3" && choices != "TV4" && choices != "TV5" && choices != "Q") {
			cout << "Wrong Channel" << endl; 
			continue;
		}
	
		if(choices == "TV1"){
			cout << "TV1 - Channel 1" << endl;
		}else if (choices == "TV2"){
	 		cout << "TV2 - Channel 2" << endl;
		}else if (choices == "TV3"){
			cout << "TV3 - Channel 3" << endl;
		}else if (choices == "TV4"){
			cout << "TV4 - Channel 4" << endl;
		}else{
			cout << "TV5 - Channel 5" << endl;
		}
		
	}while(choices != "Q");
  
	return 0;
}