#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int a=100 , m=2345;
float b=25.2387 , n=123.345;
cout<<hex<<"a="<<a<<endl;
cout<<dec<<"a="<<a<<endl;
cout << setprecision(2);
cout<<"b="<<b<<endl;
cout<<"n="<<n<<endl;
cout<<"a="<<setfill('#')<< setw(10)<<a<<endl;
cout<<"m="<<m<<endl;
return 0;
}
