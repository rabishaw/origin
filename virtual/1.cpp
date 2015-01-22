#include<iostream>

using namespace std;

class one
{
	public:
		virtual void display ( void )
		{
			cout << "\n with in class one \n ";
		}
};
class two : public one
{
	public:
		void display (void )
		{
			cout << "\n with in class two \n ";
		}
};

int main ( void )
{
	 one a;
	 two b;
	a.display();
	b.display();
	cout << "\n ============================================= \n ";
	one *ptr1 = NULL;
	two *ptr2 = NULL;
	ptr1 = &b;
	ptr1->display();
	cout << "\n --------------------------------------------------------------- \n";
	one &g = b;
	g.display();
	return ( 0 );
}
