#include<iostream>

using namespace std;

class simple
{
	int data;

	public:
	void set_value ( int );
	void get_value ( void );
};

inline void simple :: set_value ( int a )
{
	data = a;
}

inline void simple :: get_value ( void )
{
	cout << "\n value of data =" << data << "\n";
	cout << "\n changing the data member of the class \n ";
	data ++;
	cout << "\n Now the changed value of data =" << data << "\n";

}

int main ( void )
{
	simple a;
	a.set_value ( 5 );
	a.get_value ();
	return ( 0 );
}
