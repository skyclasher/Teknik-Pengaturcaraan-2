#include <iostream>
using namespace std;

int main() {
	
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			if(x == 0 && y <= 0){
				cout << y << " "; 
			}else if(x == 1 && y <= 1){
				cout << y << " "; 
			}else if(x == 2 && y <= 2){
				cout << y << " "; 
			}else if(x == 3 && y <= 3){
				cout << y << " "; 
			}else if(x == 4 && y <= 4){
				cout << y << " "; 
			}else{
				continue;
			}
		}
		cout << endl;
	}
	
   	return 0;
}