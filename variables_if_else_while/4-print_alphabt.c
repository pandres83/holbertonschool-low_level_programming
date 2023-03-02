#include <stdio.h>
/**
 *main - project: C - Variables, if, else, while
 *Description: Not prints letter q an e
 *Return: Always (0);
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
