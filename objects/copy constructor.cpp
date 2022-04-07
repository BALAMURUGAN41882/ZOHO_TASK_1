#include<iostream>
using namespace std;

class Point
{
public:
int x, y,z,d,e;
public:
	Point(int x1, int y1,int z1) { x = x1; y = y1; z=z1; }

	// Copy constructor
	Point(Point &p1) 
	{z = p1.x; d = p1.y; e=p1.z;}
};

int main()
{
	Point p1(10, 15,8); 
	Point p2 = p1; 
	
	cout << "p1.x = " << p1.x << ", p1.y = " <<p1.y<<p1.z ;
	cout << "\np2.x = " <<p2.z << ", p2.y = " <<p2.d<<p2.e ;
	


	return 0;
}
