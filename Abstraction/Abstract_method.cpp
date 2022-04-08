#include<iostream>
using namespace std;
class init
{
  virtual int method(int x)=0;  
};
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
class B
{
   int p;
   public:
   int method(int x)
   {
       p=x;
       cout<<"that is"<<endl;
       cout<<p;

   }
   int result()
   {
       return p;
   }
};
class C:public A,public B
{
    
};
class D: public A
{
    
};
int main()
{
    D obj1;
    obj1.method(98);
    cout<<obj1.result();
    C obj2;
    obj2.B::method(95);
    cout<<obj2.B::result();
    C obj3;
    obj3.A::method(25);
    cout<<obj3.A::result();
}
