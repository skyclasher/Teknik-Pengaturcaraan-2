#ifndef BREAD_H
#define BREAD_H
#include "Bread.h"
#include <string>
#include <stdlib.h> 
using namespace std;

class Bread
{
	private:
		string code, name;
		float price;
		int quantity;
	public:
		void setCode(string s){
			code = s;
		}
		void setQuantity(int q){
			quantity = q;
		}
		string getCode() const {
			return code;
		}
		int getQuantity() const {
			return quantity;
		}
		float getPrice();
		string getName();
};
float Bread::getPrice(){
	string sPrice = code.substr(3,3);
	char cprice[4];
	for (int i = 0; i < sizeof(sPrice); i++)
	{
		if(i == 1)
			cprice[i] = '.';
		else
		{
			int k =0;
			if(i >= 3)
		 		k = i-1;
			else
				k = i;
	    	cprice[i] = sPrice[k];
		}
	}
	price = atof(cprice);
	return price;
};
string Bread::getName(){
	string plu = code.substr(0,3);
	
	if (!plu.compare("101")){
		name = "Raisin Croissant";
	}else if (!plu.compare("102")){
		name = "Sugar Croissant";
	}else if (!plu.compare("201")){
		name = "Sambal Bun";
	}else if (!plu.compare("202")){
		name = "Cheese Bun";
	}else{
		name = "Kaya Bun";
	}
	return name;
};
#endif