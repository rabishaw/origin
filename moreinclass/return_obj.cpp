#include <iostream>
using namespace std;

class simple 
{
	int data;
	public:
	void set ( void );
	simple increase ( simple );
	void display ( void );
};

void simple :: display ( void )
{
	cout << "\n the value of data = "<< data << "\n";
}

void simple :: set ( void )
{
	int temp =0;
	cout << "\n Enter the value you want to enter\n";
	cin >> temp;
	data = temp;
}

simple simple :: increase ( simple a )
{
	int temp =0;
	cout << "\n enter the value you want to increase\n";
	cin >> temp;
	a.data = a.data + temp ;
	return ( a );
}

int main ( void )
{
	simple a,b;
	a.set ();
	a.display ();
	b = a.increase ( a );
	b.display ();

	return ( 0 );
}
