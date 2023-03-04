#include "main.h"
/**
 *times_table - times table
 *
 *Description: Description
*/
void times_table(void)
{
	int n;
	int k;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			printf("%d", k * n);
			if (k != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');

			}
		}
	}
}
