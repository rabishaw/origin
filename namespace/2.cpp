#include<iostream>
using namespace std;

namespace rabi
{
int a =5;
void display ( void )
{
cout<< "\n hello ";
}
}
using namespace rabi;

int main ( void )
{
cout << a;
display();
return ( 0 );
}
