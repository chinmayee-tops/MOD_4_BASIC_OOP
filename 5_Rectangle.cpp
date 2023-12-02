/*
Write a C++ program to create a class called Rectangle 
that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.  */

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        	float len, wid;
    public:
        	void getData();
        	float areaOfRect();
        	float periOfRect();
};
void Rectangle::getData()
{
    cout<<"\n\n\t Enter Length and Width of Rectangle: ";
    cin>>len>>wid;
}
float Rectangle::areaOfRect()
{
    return (len*wid);
}
float Rectangle::periOfRect()
{
    return (2*(len+wid));
}
main()
{
    Rectangle c;
    float area, per;
    c.getData();
    area = c.areaOfRect();
    per = c.periOfRect();
    cout<<"\n\n\t Area = "<<area;
    cout<<"\n\n\t Perimeter = "<<per;
    cout<<endl;
 }
