#include<iostream>

using namespace std;

class one 
{
	public:
		int value;
		void set ( void )
		{
			value = 5;
		}
		void get ( void )
		{
			cout << "\n value = "<< value << "\n" ;
		}

};

class two : public one
{



};

int main ( void )
{
	two a;
	a. one :: get();
	a.get();
	return ( 0 );
}
