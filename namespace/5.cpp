#include <iostream>
using namespace std;

namespace SKU
{
	int i = 6;
	void Function1( )
	{
		cout << "Hello World\n";
	}
}

namespace SKU
{
	int j = 7;
	void Function2( )
	{
		cout << "Hi World\n";
	}
}

int main( )
{
	using namespace SKU;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	
	Function1( );
	Function2( );

	return 0;
}
