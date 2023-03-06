#include <string.h>
#include <stdio.h>
/**
 *print_rev - reverse
 *@s: parameter
 *Description: return the reverse of a string
*/
void print_rev(char *s)
{
	int len = strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
