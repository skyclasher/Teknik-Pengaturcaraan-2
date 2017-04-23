#include<iostream.h>
#include<iomanip>
#include<cstring>

using namespace std;

class Counter
{
	public:
		Counter (int start=0)
		{
			value1=start;
			value2=start;
		}
		int getValue1() const{
			return value1;
		}
		int getValue2() const{
			return value2;
		}
		void count()
		{
			value1++;
			value2+=2;
		}
		private:
		int value1;
		int value2;
};

int main()
{
	Counter c1(5);
	for (int i=0;i<3;i++)
		c1.count();
	Counter c2=c1;
	for(int i=0;i<3;i++)
		c2.count();
	Counter c3,c4;
	c4=c3=c1;
	for(int i=0;i<2;i++)
		c3.count();
	cout<<"Stop c1 at "<<c1.getValue1()<<" and "<<c1.getValue2()<<endl;
	cout<<"Stop c2 at "<<c2.getValue1()<<" and "<<c2.getValue2()<<endl;
	cout<<"Stop c3 at "<<c3.getValue1()<<" and "<<c3.getValue2()<<endl;
	cout<<"Stop c4 at "<<c4.getValue1()<<" and "<<c4.getValue2()<<endl;
	
	return 0;
}