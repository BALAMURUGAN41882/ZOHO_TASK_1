#include<iostream>
using namespace std;
class A
{
   int p;
   public:
   int method(int x)
   {
       p=x;
       cout<<"this is"<<endl;
       cout<<p;

   }
   int result()
   {
       return p;
   }
};
class B:public A
{
    public:
    void call()
    {
        cout<<result();
    }
};
int main()
{
    B obj1;
    obj1.method(23);
    obj1.call();
}
