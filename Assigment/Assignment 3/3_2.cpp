#include<iostream>
using namespace std;

void PamerList(int[]);

int main()
{
	int senarai2[] = {
		5,10,15,20,25,30,35
	};
	
	PamerList(senarai2);
}

void PamerList(int list[])
{
	int jumlah;
	
	for(int i=0; i<5; i++){
		jumlah = list[i] + list[i + 1];
		cout << jumlah << endl;
	}
}