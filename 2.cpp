#include<iostream>
using namespace std;

int add ( int, int , int=1, int =2 );
int add (int ,int = 1 );
int main ( void )
{
	int value =0;

	value = add ( 1,2,3,4);
	cout << "\n value of val 1,2,3,4 = "<< value ;

	value = add (1,2,3);
	cout << "\n value of val 1,2,3 = "<< value ;

	value = add (1);
	cout << "\n value of val 1,2 = "<< value <<"\n";

	value = add (1);
	cout << "\n value of val 1= "<< value <<"\n";

	return ( 0 );
}
int add ( int a, int b, int c, int d )
{
	return ( a + b + c + d );

}
int add ( int a, int b )
{
return ( a+ b );
}
