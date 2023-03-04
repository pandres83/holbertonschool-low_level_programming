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
	int res;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			res = k * n;
			printf("%d", res);
			if (k != 9 )
			{
				putchar(',');
				if ( (k + 1) * n < 10)
				{
					putchar(' ');
					putchar(' ');
				}
				else
				{
					putchar(' ');
				}
			}
			else
			{
				putchar('\n');

			}
		}
	}
}
