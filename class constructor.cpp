
#include <iostream>

using namespace std;
class construc
{
    
    int id;
    int flow;
    construc()
    {
        cout<<"default constructor\n";
    }
    construc(int x,int y)
    {
        cout<<"new parameterized constructor\n";
        id=x;
        flow=y;
    }
 
};
int main()
{
    construc obj2;//default constructor
    construc obj1(3,5);
    cout<<obj1.id;
    
    
    return 0;
}