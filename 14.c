#include<stdio.h>
#include<string.h>

int main ( void )
{

	char input [100];
	char *ptr = NULL;
	int val [2];
	int count =0;
	int plus =0, i =0;

	printf ("\n enter the data\n example --> 2 + 2\n");
	fgets ( input, 100, stdin );

	printf ("\n %s", input );

	ptr = strtok ( input, " " );

	while ( ptr != NULL )
	{
		
		ptr = strtok ( NULL, " " );
	
		if ( isdigit((int)*ptr))
		{
			val[i]= (int)*ptr ;
			i++;
			printf ("\n\n %d", val[i]);
		}
		if ( *ptr == 43 )
		{
			printf ( "\n with in plus\n");
			plus =1;
		}

	}
	printf ( "\n value of plus = %d", plus );
	if ( plus )
	{
		printf ( "\n with in add ");
		printf ( "\n value of %d %d ", val[0], val[1] );
		printf ( "\n%d", ( val[0] + val [1] ));
	}
	printf ( "\n " );
	return ( 0 );
}
