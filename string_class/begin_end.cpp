#include<iostream>
#include<string>

using namespace std;

int main ( void ) 
{
	string s1 = "rabi shankar shaw" ;
	string :: iterator i;

	for ( i = s1.begin() ; i < s1.end(); i++ )
	{
		cout << *i;
	}

	cout << "\n ---------------------------------- \n " ;
	i = s1.begin();
	cout << *i << "\n" ;

	return ( 0 );
}
