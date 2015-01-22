#include<iostream>
using namespace std;

class simple 
{
	int data1;
	int data2;
	public:
		simple ( int, int = 17 );
		void get ( void );
		~simple();
};
simple :: ~simple()
{
cout << "\n with in the destructor\n" ;
}
void simple :: get ( void )
{
	cout << "\n with in the get function\n";
	cout << "\n value of data1 =" << data1 << "\n value of data2 = " << data2 << "\n";
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
cout << "\n ============================================================\n";
	a = b ;
	a.get ();
	return ( 0 );
}
