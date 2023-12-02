//WAP to create simple calculator using class.

#include <iostream>
using namespace std;

class Calculator
{
	int n1, n2;
	
	public : 
			void getNumbers()
			{
				cout<<"\n\n\t Input First Number: ";    
        		cin>>n1;
        		cout<<"\n\n\t Input Second Number: ";   
        		cin>>n2;
			}
			
			void Add()
			{
				cout<<"\n\n\t"<<"Addition : "<<n1+n2;
			}
			
			void Sub()
			{
				cout<<"\n\n\t"<<"Subtraction : "<<n1-n2;
			}
			
			void Mul()
			{
				cout<<"\n\n\t"<<"Multiplication : "<<n1*n2;
			}
			
			void Div()
			{
				cout<<"\n\n\t"<<"Division : "<<n1/n2;
			}
};

main()
{
	Calculator Calc;
	
	Calc.getNumbers();
	Calc.Add();
	Calc.Sub();
	Calc.Mul();
	Calc.Div();
	
}
