#include<iostream>

using namespace std;

class parent
{
public:
	int data_partner;
void get_parent ( void );
};
class child : public parent
{
	int data_child;

void get_child ( void );
};

void parent :: get_parent ( void ) 
{
cout << "\n with in the get_parent() "<< "\n value of data_parent = "<< data_parent << "\n";
}

void chilp :: get_child ( void )
{
cout << "\n with in the get_child() "<< "\n value of data_child = "<< data_child << "\n";
}

int main ( void )
{
	child a;
	parent b;

	a.data_partner = 5;
	cout << "\n size of child class" << sizeof(a) << "\n sizeof parent "<< sizeof ( b ) << "\n " ;

	return ( 0 );
}
