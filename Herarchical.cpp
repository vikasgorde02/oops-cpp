#include <iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{ clrscr();
			cout<<"This is Vehicle"<<endl;
		}
};
class car: public Vehicle
{
	public:
		car()
		{
		cout<<"This Vehicle is a Car"<<endl;	
		}
};
class bus: public Vehicle
{
	public:
		bus()
		{
		cout<<"This Vehicle is bus "<<endl;
		}
};
int main()
{
	car obj1;
	bus obj2;
	return 0;
}


//This is Vehicle
//This Vehicle is a Car
//This is Vehicle
//This Vehicle is bus

