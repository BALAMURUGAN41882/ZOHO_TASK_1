#include<iostream>
using namespace std;
class Asset
{
  private:
  void member1()
  {
      cout<<"This is in private member function\n";
  }
  public:
  int getprvt()
  {
      member1();
      return 0;
  }
};

class subAsset1:public Asset
{
    
};
class subAsset2:public Asset
{
    
};
class derived1:public subAsset1
{
    protected:
    void der_mem1()
    {
        cout<<"This is in derived class1\n";
    }
};
class derived2:public subAsset1
{
    protected:
    void der_mem2()
    {
        cout<<"this is derived class2\n";
    }
};
class derived3:public subAsset2
{
    protected:
    void der_mem3()
    {
        cout<<"this is derived class3\n";
    }
};
class derived4:public subAsset2
{
    private:
    void der_mem4()
    {
        cout<<"this is derived class4\n";
    }
    public:
    int get_mem4()
    {
        der_mem4();
        return 0;
    }
};

class hybrid:public derived1,public derived2,public derived3, public derived4
{
    public:
    void final_member()
    {
        cout<<"final hybrid\n";
    }
    public:
    int getx()
    {
        der_mem1();
        der_mem2();
        der_mem3();
        return 0;
    }
};
int main()
{
    hybrid obj1;
    obj1.derived4::getprvt();
    obj1.derived3::getprvt();
   
    obj1.derived1::getprvt();
   obj1.final_member();
   obj1.getx();
   

}








