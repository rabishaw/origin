#include <iostream>
#include <string.h>

using namespace std;

class simple
{
	char *p1;
	char *p2;
	public:
	void get ( void );
	simple ( char *, char * );
};

void simple :: get ( void )
{
	cout << "\n with in get function";
	cout << "\n value of p1=" << p1 << "\n value of p2 = " << p2 << " \n" ;
}

simple :: simple ( char *a , char *b )
{
	int len1 = 0, len2 = 0;
	len1 = strlen ( a ) +1 ;
	len2 = strlen ( b ) +1 ;
	p1 = new char[ len1 ];
	p2 = new char[ len2 ];

	strcpy ( p1, a );
	strcpy ( p2, b );

}

int main ( void )
{
	simple a ( (char*)"rabi",(char*) "shankar" );
	simple b ( (char*)"shaw" ,(char*) "andal" );

	a.get ();
	b.get ();

	return ( 0 );
}
