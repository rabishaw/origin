#include<iostream>
using namespace std;

class simple 
{
	int data;
	public:
	simple ( void )
	{
		data =7;
	}
	void get ( void )
	{
		cout << "\n with in get function\n value of data =" << data << "\n" ;
	}
};

int main ( void )
{
	simple a ;
	a.get();
	return ( 0 );
}
