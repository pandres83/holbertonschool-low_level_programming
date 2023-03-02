#include <stdio.h>
/**
 *main - project: C - Variables, if, else, while
 *Description: Prints all possible combinations of single digit number
 *Return: Always (0);
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if ( number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
