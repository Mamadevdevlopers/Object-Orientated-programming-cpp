/*
Aim:
         Create a class that imitates part of the functionality of the base data type int.Call the class Int. The only data in this class is an int variable. Include memberfunctions to initialize an int to 0, to initialize it to an int value, to display it, and
to add two Int values. Write a program that exercises this class by creatingtwo initialized Int values, adding these two initialized value and placing the response in the un-initialized value, and then display this result.
*/
#include <iostream>
//#include <conio.h>
using namespace std;

class int()
{
	private:
	
	int intvar;
	
	public:
	
	int()
	{
		intvar = 0 ;
	}
}

void display()
{
	cout << intvar << "\n" ;
}

void add(int x, int y)
{
	intvar = x.intvar + y.intvar;
}
};

int main() 
{
	int a(5), b(5);
	
	int c ;
	c.add(a,b);
	c.display();
}
	

		
		
		
		
		
		
		
		
		
		
		
