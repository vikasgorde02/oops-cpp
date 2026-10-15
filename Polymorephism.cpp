#include <iostream>
using namespace std;
class Animal
{
	public:
		void sound()
		{
			cout<<"Animal Make Sound"<<endl;
		}
};
class Dog : public Animal
{
	public:
		void sound()
		{
			cout<<"Dog Barks"<<endl;
		}
};
int main()
{
	Dog d;
	d.sound();
	return 0;
}
