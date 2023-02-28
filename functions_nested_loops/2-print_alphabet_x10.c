#include <stdio.h>
/**
 *Excercise two - project: C - Variables, if, else, while
 *Description: prints the alphabet 10 times
 *Return: Always (0);
 */
void print_alphabet_x10(void)
{
	char lc;

	for (int k = 0; k <= 10; k++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			putchar(lc);
		}
		putchar('\n');
	}
}
