#include<iostream>

using namespace std;

class simple 
{
	int data1;
	int data2;
	public:
	simple ( int, int );
	void get ( void );
};

simple :: simple ( int a, int b )
{
	data1 = a;
	data2 = b;
	cout << "\n with in parameter constructor \n";
}

void simple :: get ( void )
{
	cout << "\n with in get function";
	cout << "\n value of data1 =" << data1 << " \n value of data2 = " << data2 << "\n ";
}

int main ( void )
{
	simple a(1,2);
	simple b(4,5);

	a.get();
	b.get();
	return ( 0 );
}
