#include <stdio.h>
/**
 *main - project: C - Variables, if, else, while
 *Description: Prints numbers all the numbers of base 16.
 *Return: Always (0);
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (letter = 'a'; letter <'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
