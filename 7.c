#include <stdio.h>
int main()
{
	char str[16];
	int len;

	len = snprintf(str, sizeof( str ), "%s %d %f", "hello world", 1000, 10.5);
	printf("%s\n", str);

	if (len >= 16)
	{
		printf("length truncated (from %d)\n", len);
	}
}
