#include<iostream>
using namespace std;

class simple 
{
	int data1;
	int data2;
	public:
	simple ( void )
	{
		data1 = 1;
		data2 = 2;
	}
	void set (int , int ); 
	void display ( void );
	friend void operator - ( simple & );
};

void simple :: set ( int a, int b )
{
	data1 = a;
	data2 = b;
}

void operator - ( simple &a )
{
	a.data1 = -a.data1;
	a.data2 = -a.data2;
}

void simple :: display ( void )
{
	cout << "\n data1 = " << data1;
	cout << "\n data2 = " << data2 << "\n";

}
int main ( void )
{
	simple a;
	-a;
	a.display ( );
	return ( 0 );
}
