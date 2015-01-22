#include<iostream>

using namespace std;

class simple 
{
	int data1;
	int data2;
	public:
		simple ( int, int );
		simple ( int);
		void get ( void );
};

void simple :: get ( void )
{
	cout << "\n with in the get function\n";
	cout << "\n value of data1 =" << data1 << "\n value of data2 = " << data2 << "\n";
}

simple :: simple ( int a )
{
	cout << "\n with in the single arg constructor \n";
	data1 = a;
}

simple :: simple ( int a , int b )
{
	cout << "\n with in the second arg constructor \n";
	data1 = a;
	data2 = b;
}

int main ( void )
{
	simple a ( 5 );
	simple b ( 5, 9 );
	a.get ();
	b.get ();

	return ( 0 );
}
