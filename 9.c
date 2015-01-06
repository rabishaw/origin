#include<stdio.h>
#include<string.h>

int main ( void )
{
	char str[]= "i love india";
	char *ptr = NULL;
	printf ("\n the string is \" %s \" ", str );

	ptr = strtok ( str, " " );

	while ( ptr != NULL )
	{
		printf ("\n %s", ptr );
		ptr = strtok ( NULL, " " );
	}

	printf ( "\n " );
	return ( 0 );
}
