#include<iostream>

using namespace std;

class papa
{
	public:
	char data1;
	void get_papa ( void );
	void display_papa ( void );
};

class mom
{
	public:
	int data2;
	void get_mom ( void );
	void display_mom ( void );
};

class baby : public papa , public mom
{
	public:
		void add ( void );
};

void papa :: get_papa ( void )
{
	cout << "\n enter the data1 value \n ";
	cin >> data1;
}
void papa :: display_papa ( void )
{
	cout << "\n value of data1 = "<< data1 << "\n";

}

void mom :: get_mom ( void )
{
	cout << "\n enter the data2 value \n";
	cin >> data2;
}

void mom :: display_mom ( void )
{
	cout << "\n the value of data2 = " << data2 << "\n";
}

void baby :: add ( void )
{
	int temp =0;
	get_papa ();
	get_mom ();
	cout << "\n" <<  data1 << "\n";
	cout << "\n" <<  data2 << "\n" <<endl;
	temp = ( data1 + data2 );
	cout << "\n" << temp << "\n";
	cout << "\n total summesion = " << ( data1 + data2 ) << "\n" ;
}

int main ( void )
{
	baby a;
	a.add ();
	return ( 0 );
}
