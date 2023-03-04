#include <stdio.h>
/**
*print_to_98 - Prints numbers until 98
*@n: the number
*
*Description: prints
*Return: void
*/
void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			printf("%d", k);
			if (k < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			printf("%d", k);
			if (k > 98)
			{
				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
	}
}
