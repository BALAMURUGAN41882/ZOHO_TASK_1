
#include <iostream>

using namespace std;
class first
{
    public:
    int z1=21;
    float z2=22;
    void toto2();
    void toto()
    {
        cout<<"normal class prgm";
    }
};
void first::toto2()
{
    cout<<"\nthis is second global functions";
}

int main()
{
    first f1obj;
    cout<<f1obj.z1<<endl;
    f1obj.toto();
    cout<<"\nHello World";
    f1obj.toto2();
    return 0;
}



