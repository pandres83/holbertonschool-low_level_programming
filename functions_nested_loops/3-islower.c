#include <stdio.h>
#include <ctype.h>
/**
 *_islower - prints wheter character is lowercase or not.
 *@c: This parameter receive a caracter
 *
 *Description: prints lowercase caractwer
 *Return: integer
 */
int _islower(int c)
{
	int answer;

	answer = islower(c);
	return (answer);
}
