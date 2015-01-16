#include<iostream>

using namespace std;

class simple
{

	static int data;

	public:
	void set_data ( void );
	void get_data ( void );

};
int simple :: data = 1;

void simple :: set_data ( void )
{
	cout << "\n with in the set_data \n ";
	data ++;
}

void simple :: get_data ( void )
{
	cout << "\n with in the get_value value of data= "<< data;
}

int main ( void )
{
	simple a,b;
	a.get_data();
	b.get_data();

	a.set_data();
	b.set_data();

	a.get_data();
	b.get_data();

	cout << "\n";
	return ( 0 );
}
