#include <stdio.h>

int main(void)
{
	float value1, value2;
	char operato;

	printf ("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operato, &value2);

	if (operato == '+')
		printf ("%.2f\n", value1 + value2);
	else if (operato == '-')
		printf ("%.2f\n", value1 - value2);
	else if (operato == '*' )
		printf ("%.2f\n", value1 * value2);
	else if (operato == '/' )
	{
		if (value2 == 0)
			printf ("Division by zero.\n");
		else
			printf ("%.2f\n", value1 / value2);
	}
	else
		printf ("Unknown operator.\n");
	return 0;
}
