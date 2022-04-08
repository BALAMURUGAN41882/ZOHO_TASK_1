#include<iostream>
using namespace std;
class Encapsulation
{
    int private_method()
    {
        cout<<"This is private method in Encapsulation";
        return 1;
    }
    public:
    int func()
    {
        private_method();
    }
    int getX(){
        return private_method();
    }
   
};
class B:public Encapsulation
{
};
int main()
{
    B obj1;
    obj1.func();
    obj1.getX();
    
    
}