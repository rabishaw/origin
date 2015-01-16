#include <iostream>
using namespace std;

namespace A
{
    int x = 1;
    int z = 2;
}

namespace B 
{
    int y = 3;
    int z = 4;
}
void CheckThis(int i)
{
	cout << "Working....." << endl;
}
void Example( )
{
	using namespace A; 
	using namespace B;

     //Unqualified x unambiguously resolves to A::x
	CheckThis( x );
     // Unqualified y unambiguously resolves to B::y
	CheckThis( y );
     // The A:: qualifications makes this unambiguous
	CheckThis( A::z );
     // The B:: qualifications makes this unambiguous
	CheckThis( B::z );
     // Confusion and Ambiguity
     //	CheckThis( z );
	
}
int main()
{ 
	Example(); 
	return 0;
}
