#include<iostream>

using namespace std;

namespace rabi
{
	int data1= 1;
	namespace shaw
	{
		int data2 =2;
	}
}
int main ( void )
{
	using namespace rabi;
	cout << data1 << "\n" ;
	cout << shaw :: data2 << "\n" ;

	return ( 0 );
}
