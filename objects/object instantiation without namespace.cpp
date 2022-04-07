#include <iostream>
class person
{public :
	char name[20];
	int id;
	void getdetails(){
	    int a=23;
	    std::cout << a << std::endl;
	    
	}
};
int main()
{
person p1; // p1 is a object//memory is allocated after object is created 
p1.id={4};
std::cout << p1.id << std::endl;
p1.getdetails();
return 0;
}