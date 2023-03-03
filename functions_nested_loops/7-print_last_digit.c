#include <stdio.h>
#include <stdlib.h>

/**
 *print_last_digit - print last digit
 *@c: This parameter receive a caracter
 *
 *Description: prints lowercase caractwer
 *Return: integer
 */
void print_last_digit(int c)
{
	int answer;

	answer = c % 10;
	putchar(answer);
	return;
}
