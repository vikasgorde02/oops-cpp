#include <iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle"<<endl;
		}
};
class Fare
	{
		public:
			Fare()
			{
				cout<<"This is a Fare"<<endl;
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
class Bus: public Vehicle , Fare
{
	public:
		Bus()
		{
			cout<<"This Vehicle is Bus With Fare"<<endl;
		}
};
int main()
{
	Bus obj;
	return 0;
}
//This is a Vehicle
//This is a Fare
//This Vehicle is Bus With Fare
