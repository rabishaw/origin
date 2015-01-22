#include<iostream>
using namespace std;

class polygon
{
	protected:
		int hight;
		int width;
	public:
		void get_polygon ( int , int );
		virtual int area (void )=0;
};

void polygon :: get_polygon (int a, int b )
{
	hight = a;
	width = b;
}

class rectangle : public polygon
{
	public:
		int area ( void );
};

class triangle : public polygon
{
	public:
		int area (void );
};
int rectangle :: area ( void )
{
	return ( hight * width );
}

int triangle :: area ( void )
{
	return ( hight * width/2 );
}

int main ( void )
{
//	rectangle  a;
//	triangle b; 
	polygon * ptr1 = NULL, *ptr2 = NULL; 
	ptr1 = new rectangle;
	ptr2 = new triangle;
	ptr1->get_polygon ( 10, 10 );
	ptr2->get_polygon ( 10, 10 );
	cout << "\n " <<ptr1->area ();
	cout << "\n " << ptr2->area () << "\n";
	return ( 0 );
}
