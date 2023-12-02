/* 
Write a C++ program to implement a class called Circle that 
has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.  */

#include <iostream>
using namespace std;
class Circle
{
    public:
        float findArea(float r)
        {
            return (3.14*r*r);  //area=pi*r*r;
        }
        float findCircum(float r)
        {
            return (2*3.14*r);   //cir=2PiR
        }
};

main()
{
    Circle c;
    float rad, area, circum;
    cout<<"\n\n\t Enter the Radius of Circle: ";
    cin>>rad;
    area = c.findArea(rad);
    circum = c.findCircum(rad);
    cout<<"\n\n\t Area of Circle = "<<area;
    cout<<"\n\n\t Circumference of Circle = "<<circum;
    cout<<endl;
  
}
