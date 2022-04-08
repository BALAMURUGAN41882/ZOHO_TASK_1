#include<iostream>
using namespace std;
class abstraction
{
    int private_method()
    {
        cout<<"This is private method in abstraction";
        return 1;
    }
    public:
    int func()
    {
        private_method();
    }
   
};
class B:public abstraction
{
};
int main()
{
    B obj1;
    obj1.func();
    
    
}