#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	
	if ((num % 400 == 0 ) || (num % 4 == 0 && num % 100 !=0))
	{
		cout<<"It is a Leap Year";
	}else{
		cout<<"It is Not Leap Year";
	}
	return 0;
}
