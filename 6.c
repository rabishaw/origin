#include <stdio.h>

int main ( void )
{
char str[5] = "rabis";
int ret =0;
//snprintf( str, sizeof( str ),"%s", str );
snprintf( NULL, 0,"%s","rabi rabi" );
printf ( "\n sizeof str = %ld", sizeof(str) );
printf ( "\n value of ret = %d\n ",ret );
return ( 0 );
}
