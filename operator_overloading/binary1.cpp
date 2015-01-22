#include<iostream>
using namespace std;

class simple 
{
	int data1;
	int data2;
	public:
	simple ( void )
	{
	}
	void set (int , int ); 
	void display ( void );
friend	simple operator + (simple &, simple & );
};

void simple :: set ( int a, int b )
{
	data1 = a;
	data2 = b;
}

simple operator + ( simple &b, simple &c )
{
	simple temp;
	temp.data1 = c.data1 + b.data1;
	temp.data2 = c. data2 + b.data2;
	return ( temp );
}

void simple :: display ( void )
{
	cout << "\n data1 = " << data1;
	cout << "\n data2 = " << data2 << "\n";

}
int main ( void )
{
	simple a, b, c;
	a.set ( 1, 2 );
	b.set ( 3,5 );
	a.display();
	b.display ();
	c = a + b;
	c.display ( );
	return ( 0 );
}
