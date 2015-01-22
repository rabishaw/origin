#include<iostream>
#include<string>

using namespace std;

int main ( void )
{
int length =0;
string s1 = "shankar";
string s2 = "rabi";

length = s1.length();
cout << "\n length of the string s1 -- " << length << "\n";
s1.insert ( length, " " );
cout << s1;

cout << "\n";
s1.insert ( length +1, s2 );
cout << s1;
cout << "\n";
return ( 0 );
}
