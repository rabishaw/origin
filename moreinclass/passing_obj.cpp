#include <iostream>

using namespace std;

class simple
{
	public:
		int data;
		void set ( simple , int );
		void set ( int, simple & );
		void set ( simple * , int );
		void display ( void )
		{
			cout << "\n value of the data = "<< data << "\n";
		}
};
void simple :: set ( simple a, int b )
{
	a.data = b;

}
void simple :: set ( int b, simple &a )
{
	a.data = b;

}

void simple :: set ( simple *a, int b )
{
	a->data = b;
}
int main ( void )
{
	simple a;
	cout << "\n before any function calling the value of data is " << a.data<<"\n" ;
	cout << "\n calling bu obj \n";
	a.set ( a, 1 );
	a.display ();
	cout << "\n calling by reference \n";
	a.set ( 2, a );
	a.display();
	cout << "\n calling bu pointer \n";
	a.set ( &a, 3 );
	a.display ();

	return ( 0 );
}
