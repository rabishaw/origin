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
	void operator - ( void );
};

void simple :: set ( int a, int b )
{
	data1 = a;
	data2 = b;
}

void simple :: operator - ( void )
{
	data1 = -data1;
	data2 = -data2;
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
