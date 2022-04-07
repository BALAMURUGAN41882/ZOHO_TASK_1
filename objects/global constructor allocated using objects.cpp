#include <iostream>
using namespace std;
class person
{public :
	char name[20];
	int id;
	void getdetails(){
	    int a=23;
	    std::cout << a << std::endl;
	}
	person();
	person(int x);
};
person::person()
{
	    cout<<"cons1";
}  
person::person(int x)
{
	    cout<<"cons2";
}  
int main()
{
person p1; // p1 is a object//memory is allocated after object is created 
p1.id={4};
std::cout << p1.id << std::endl;
p1.getdetails();
person p2(34);

return 0;
}