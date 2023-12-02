/*
Write a C++ program to create a class called Person that has 
private member variables for name, age and country. 
Implement member functions to set and get the values of these variables. */

#include <iostream>
using namespace std;

class Person
{
	char name[30];	
	int age;
	char country[20];
	
	public:
			void getdata()
			{
				cout<<"\n\n\t Input Person's Name : ";
				cin>>name;
				cout<<"\n\n\t Input Person's Age : ";
				cin>>age;
				cout<<"\n\n\t Input Person's Country : ";
				cin>>country;
			}
			void setdata()
			{
				cout<<"\n\n\t Person's Name : "<<name;
				cout<<"\n\n\t Person's Age : "<<age;
				cout<<"\n\n\t Person's Country : "<<country;
			}
};

main()
{
	Person P;
	P.getdata();
	P.setdata();
}
