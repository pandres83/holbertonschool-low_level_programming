#include "main.h"
#include <string.h>
/**
 *puts_half - prints the half of the string
 *@str: the string
 *
 *Description: Printi a half of the string
*/
void puts_half(char *str)
{

	int length = strlen(str);
	int start_index = length / 2;

	if (length % 2 == 1)
	{
		start_index = (length - 1) / 2;
	}
	while (str[start_index-1] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
