#include <iostream>

using namespace std;

class simple
{
	static int static_data;
	int normal_data;

	public:
	static void static_function ( void );
	void display ( void );

};
int simple:: static_data;

 void simple :: static_function ( )
{
	static_data = 7;
}
void simple :: display ( void )
{
	cout << "\n value of static_data = " << static_data ;
	cout << "\n value of normal_data = " << normal_data ;
}

int main ( void )
{
	simple a;
	a.display ();

	simple::static_function();
	a.display();

	return ( 0 );
}
