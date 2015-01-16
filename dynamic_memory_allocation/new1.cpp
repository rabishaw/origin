#include<iostream>
#include<string.h>

using namespace std;

class simple
{
	int val;
	char *name;
	public:
	void set ( int , char [] );
	void get ( void );
	void reset ( void );
};

void simple :: set (int a, char str[] )
{
	cout << "\n with in the set function \n";
	int length = 0;
	val = a;
	length = strlen ( str ) + 1;
	cout << "\n length = " << length << "\n" ;
	name = new char [length];
	strcpy ( name , str );	

}

void simple :: get ( void )
{
	cout << "\n the value of val = " << val << "\n" ;
	cout << "\n name = " << name << "\n" ;
}

void simple :: reset ( void )
{
	cout << "\n with in the reset function \n" ;
	delete ( name );
	if ( *name != NULL )
	{
		cout << "\n delete is not successfull \n"<<name << "\n";
	}
}

int main ( void )
{
	simple a;
	a.set ( 5, (char * )"rabi shaw" );
	a.get ();
	a.reset ();
	return ( 0 );
}
