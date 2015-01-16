#include <iostream>
using namespace std;
void function2( );
namespace Subhash 
{
	int i;
	void function( )
	{	
		cout << "Hello function\n";
	}
}

int main( )
{
	using Subhash::i; // using declaration
	using Subhash::function; //using declaration
	i = 6;
	cout << "i = " << i << endl;
	function( );		
	return 0;
}
