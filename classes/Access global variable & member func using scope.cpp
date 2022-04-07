#include <iostream>
using namespace std;

namespace n1 {
int x = 2;
void fun()
{
	cout << "This is fun() of n1"
		<< endl;
}

void print()
{
	fun();
}
}
namespace n2
{
    int x=3;
    float y=8;
    void toto()
    {
        cout<<"this is new"<<endl;
    }
    void that()
    {cout<<"my dear"<<endl;}
}
int main()
{
	
	using namespace n1;// n1::fun();
	
	fun();//scope resolution operator for accessing global variables and methods
	print();
	using namespace n2;;//or we can write n2::tt();
	toto();
	that();
	

	return 0;
}