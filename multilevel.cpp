#include<iostream>
using namespace std;
class Vehicle{
	public:
		 vehicle()
		{
			cout<<"this is vehicle"<<endl;
		}
};
class fourwheeler: public Vehicle
{
 public :
	 forwheeler()
	{
	cout<<"this is fourwheeler";
	}
};
	
class car: public fourwheeler 
{
 public:
	 car()
	{
	cout<<"this is forwheeler is car";
	}
	};
		

int main() {
    car obj;
    return 0;
}
	
