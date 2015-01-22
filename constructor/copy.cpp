#include<iostream>

using namespace std;
class simple 
{
	int data;
	public:
	simple ( void );
	void get ( void );
	simple ( simple & );
};

void simple :: get ( void )
{
	cout <<"\n with in get function \n ";
	cout << "\n value of data = "<< data << "\n";
}
simple :: simple ( void )
{
	cout << "\n with the constructor \n ";
	data = 5;
}
simple :: simple ( simple &a )
{
	cout << "\n with in the copy constructor \n ";
	data = a.data;
}

int main ( void )
{
	simple a;
	cout << "\n value of the obj a \n ";
	a.get ();

	simple b = a;
	cout << "\n value of the obj b \n ";
	b.get ();

	cout << "\n=================================================\n";

	simple *ptr = new simple (a);
	ptr->get();

	return ( 0 );
}
