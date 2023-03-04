#include <stdio.h>
#include <stdlib.h>
/**
 *print_last_digit - print last digit
 *@c: This parameter receive a caracter
 *
 *Description: prints lowercase caractwer
 *Return: integer
 */
int print_last_digit(int c)
{
	int answer;

	if (c < 0)
	{
		answer = (c * -1) % 10;
	}
	else
	{
		answer =c % 10;
	}
	printf("%d", answer);
	return (answer);
}
