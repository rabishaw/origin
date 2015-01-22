#include <iostream>
using namespace std;

class simple 
{
	int data;
	public:
		void get ( void );
	simple ( void );
/*	{
		data =5;
	}*/
};
simple :: simple (void )
{
data = 6;
}
void simple :: get ( void )
{
	cout << "\n value of data =" << data << "\n" ;
}
int main ( void )
{
	simple a ;
	a.get();
	return ( 0 );
}
