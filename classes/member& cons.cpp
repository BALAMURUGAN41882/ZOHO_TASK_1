#include<iostream>
using namespace std;
class south_plaza
{
    private:
    int Blocks;
    int Employees;
    int HR;
    string Structure;
    public:
    void Hr_func(int project,int files)
    {
        cout<<"hr";
    }
    void Employees_(int product,int value);
    void Blocks_(string Structure,int count);
    south_plaza()
    {
        cout<<"New south_plaza object is created";
    }
    south_plaza(int ab)
    {
        cout<<"Parameter is passed to this constructor";
        Employees=ab;
    }
    void printemp()
    {
        cout<<"Employees";
    }
    int getX()
    {
        return Employees;
    }
    south_plaza(south_plaza &ref)
    {
        HR=ref.Employees;
    }
    int cons()
    {
        return HR;
    }
};
void south_plaza:: Employees_(int product,int value)
{
    cout<<"Employees product developing Environment";
}
void south_plaza:: Blocks_(string Structure,int count)
{
    cout<<"Blocks Structure and Number";
}

int main()
{
    south_plaza obj_check1;
    //obj_check1.void Employees
    south_plaza obj_check2(3);
    cout<<obj_check2.getX();
    obj_check1.Employees_(45,63);
    obj_check1.Blocks_("ba",5);
    south_plaza obj_check3=obj_check2;
    cout<<obj_check3.cons();
    
    
}


