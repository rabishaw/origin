#include<iostream>
#include<string>

using namespace std;

int main ( void )
{
	string s1, s2;
	int ret = 0;

	s1 = "rabi shaw";
	s2 = "rabi shaw";

	if ( !s1.compare ( s2 ) )
	{
		cout << "\n both are same \n";
	}
	return ( 0 );
}
