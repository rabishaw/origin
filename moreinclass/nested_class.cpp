#include <iostream>

using namespace std;

class outer
{
	private:
		int data_outer;
	public:
		void set_outer ( void );
		void get_outer ( void );

		class inner
		{
			private:
				int data_inner;
			public:
				void set_inner ( void );
				void get_inner ( void );
		};

};

void outer :: set_outer ( void )
{
	int temp =0;
	cout << "\n with in the set_outer function \n enter the value for the outer data \n ";
	cin >> temp;
	data_outer = temp;
}
void outer :: get_outer ( void )
{
	cout << "\n with in get_outer function \n value of the data_outer = "<< data_outer << "\n";
}

void outer :: inner :: set_inner ( void )
{
	int temp =0;
	cout << "\n with in the set_inner function \n enter the value for the inner data \n ";
	cin >> temp;
	data_inner = temp;
}

void outer :: inner :: get_inner ( void )
{
	cout << "\n with in get_inner function \n value of the data_inner = "<< data_inner << "\n";
}

int main ( void )
{
	outer a;
	outer :: inner b;

	a.set_outer();
	a.get_outer ();

	b.set_inner();
	b.get_inner();

	cout << "\n sizeof the outer = "<< sizeof(outer) << "\n" ;
	cout << "\n sizeof the inner = "<< sizeof(outer :: inner) << "\n" ;
	return ( 0 );
}
