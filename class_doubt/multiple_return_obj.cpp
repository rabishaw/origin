#include<iostream>

using namespace std;

class simple
{
	int data;
	public:
	void set (void );
	simple increase ( simple );
	void display ( void );
};

void simple :: set ( void )
{
	int temp;
	cout << "\n with in the set funcion \n";
	cout << "\n enter the value \n";
	cin >> temp;
	data = temp;
}

void simple :: display ( void )
{
	cout << "\n with in the display function\n";
	cout << "\n value of the data = " << data << "\n";
}

simple simple :: increase ( simple a )
{
	int temp =0;
	cout << "\n enter the value you want to increase \n";
	cin >> temp;
	a.data = a.data + temp;
	return ( a );
}

int main ( void )
{
	simple a[3];
	int i=0;

	for ( i=0 ; i< 3; i++ )
	{
		a[i].set();
	}
	cout << "\n setting the data is completed \n";

	for ( i=0; i< 3; i++ )
	{
		 a[i].display();
		cout <<"\n";
	}

	for ( i=0; i< 3; i++ )
	{
		a[i] = a[i].increase( a[i] );
	}


	for ( i=0; i< 3; i++ )
	{
		 a[i].display();
		cout <<"\n";
	}

	return ( 0 );
}
