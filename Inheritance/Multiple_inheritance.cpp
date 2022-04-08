// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class multiple1
{
    private:
    void member()
    {
        cout<<"this is a in private function\n";
    }
    protected:
        void member1(){
            cout<<"this is first member function\n";}
    public:
    int getprvt()
    {
     member();
     return 0;
    }
};
class multiple2
{
    public:
    int member2()
    {
        cout<<"this is second member function\n";
    }
    
};
class inherit_multiple:public multiple1,public multiple2{
    public:
    int getprot()
    {
        member1();
        return 0;
    }
  
};

int main() {
 
    inherit_multiple obj;
    obj.member2();
    obj.getprvt();
    obj.getprot();
 
    return 0;
}