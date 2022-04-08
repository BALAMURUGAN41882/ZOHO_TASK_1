#include <iostream>
using namespace std;
class first
{
    private:
    int maths;
    public:
    int economics;
    int science;
    void economics_(int x)
    {
        economics=x;
    }
    int result(int num)
    {
        maths=num;
        return maths;
    }
};
class second:public first
{
};
class third:public second
{    public:
int social;
};
int main()
{
    third obj;
    obj.economics_(23);
    cout<<obj.economics<<"\n";
    obj.social = 12;
    cout<<obj.social<<"\n";
    cout<<"Hello World"<<"\n";
    cout<<obj.result(100);

    return 0;
}
