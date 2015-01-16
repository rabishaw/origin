#include<iostream>

using namespace std;

class simple
{
	int data;

	public:
	void set_value ( int a)
	{
		data = a;
	}
	void get_value ( void )
	{
		cout << "\n value of data =" << data << "\n";
	}

};

int main ( void )
{
	simple a;
	a.set_value ( 5 );
	a.get_value ();
	return ( 0 );
}
