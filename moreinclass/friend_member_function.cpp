#include <iostream>

using namespace std;

class simple;
class dimple
{
	public:
		void set_data ( simple &, int );
};
class simple
{
	int data;
	public:
	void display ( void );
	friend void dimple :: set_data ( simple &, int );
};
void simple :: display ( void )
{
	cout << " \n the value of data = "<< data << " \n ";
}
void dimple :: set_data ( simple &a, int b )
{
	a.data = b;
}

int main ( void )
{
	simple a;
	dimple b;
	b.set_data ( a, 8 );
	a.display ();

	return ( 0 );
}
