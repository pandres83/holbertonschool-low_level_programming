#include "main.h"
/**
 * print_alphabet - Print characters
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
}
