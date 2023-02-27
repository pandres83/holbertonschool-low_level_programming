#include <stdio.h>
/**
 *Excercise four - project: C - Variables, if, else, while
 *Description: Not prints letter q an e
 *Return: Always (0);
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
