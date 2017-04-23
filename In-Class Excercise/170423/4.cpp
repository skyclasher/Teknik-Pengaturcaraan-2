#include<iostream.h>
using namespace std;

class Engine
{
	private:
		int cc;
		
	public:
		Engine (int engine_cap)
		{
			cc = engine_cap;
		}
		int getCC() { return cc; }
};


class Car
{
	public:
		Engine engine;
		Car(int engine_cap);
		void showcar();
};

Car::Car(int engine_cap):engine(engine_cap){}

void Car::showcar()
{
	cout << "Engine Capacity: " << engine.getCC() << endl;
}

int main()
{
	Car mycar(1600);
	mycar.showcar();
 	return 0;
}