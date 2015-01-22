#include<iostream>
#include<string>

using namespace std;

int main ( void )
{
	string s1 ( "rabi" );
	string s2 ( "shankar" );
	string s3 ( "shaw" );
	string s4;

	s4.append( s1 );
	s4.append( " " );
	cout << "\n first --- " << s4 ;
	s4.append( s2 );
	s4.append( " " );
	cout << "\n Second --- " << s4 ;
	s4.append( s3 );
	cout << "\n Third --- " << s4 << "\n" ;

	return ( 0 );
}
