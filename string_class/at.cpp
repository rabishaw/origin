#include<iostream>
#include<string>

using namespace std;

int main ( void )
{
	string s1 = "rabi shankar shaw";
	int i =0;

	for ( i=0; i < s1.length() ; i++ )
	{
		if (  s1.at(i)  == 'a' )
		{
			cout <<"\n found \n";
			s1.at(i) = 'S';
		}
	}
	cout << "\n" ;
	cout << s1 << "\n" ;
	return ( 0 );
}
