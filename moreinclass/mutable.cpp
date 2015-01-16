#include<iostream>

using namespace std;

class simple
{
	mutable	int data1;
	mutable int data2;

	public:
	void set_value ( int, int );
	void get_value ( void ) const;
};

inline void simple :: set_value ( int a , int b)
{
	cout << "\n with in the set_value \n ";
	data1 = a;
	data2 = b;
}

inline void simple :: get_value ( void ) const
{
	cout << "\n value of data1 =" << data1 << "\n";
	cout << "\n value of data2 =" << data2 << "\n";
	cout << "\n changing the data members of the class \n ";
	data1 ++;
	data2 ++;
	cout << "\n Now the changed value of data1 =" << data1 << "\n";
	cout << "\n Now the changed value of data2 =" << data2 << "\n";

}

int main ( void )
{
	simple a;
	a.set_value ( 5 , 6 );
	a.get_value ();
	return ( 0 );
}
