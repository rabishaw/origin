#include<iostream>

using namespace std;

struct emp 
{
	private:
		int salary;

	public:
		void fun_salary ( int a ,int b )
		{
			if ( b > 3 )
			{
				salary = a;
			}
			else
			{
				salary = a/2;
			}
		}

		int get_data ()
		{
			return ( salary );
		}

};
int main ( void )
{
	int val = 0;
	struct emp e1, e2 ;

	e1.fun_salary ( 1000, 4 );
	e2.fun_salary ( 1000, 2 );

	val = e1.get_data ();
	cout << " that value of the salary for the e1 " << val << "\n";

	val = e2.get_data ();
	cout << " that value of the salary for the e2 " << val << "\n";

	return ( 0 );
}
