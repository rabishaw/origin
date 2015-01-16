#include <iostream>
using namespace std;

namespace A
{
	class SKU
	{
		public:
			void Display( )
			{
				cout << "Hello World\n";
			}
	};
     	void GlobalFunction( SKU &obj )
	{
		obj.Display( );
	}
}

