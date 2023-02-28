#include <stdio.h>
/**
 *print_alphabet_x10
 *Description: prints the alphabet 10 times
 *Return: Always (0);
 */
void print_alphabet_x10(void)
{
	char lc;
	int k;
	for (k = 1; k <= 10; k++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			putchar(lc);
		}
		putchar('\n');
	}
}
