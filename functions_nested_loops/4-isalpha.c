#include <stdio.h>
#include <ctype.h>
/**
 *_isalpha - prints wheter a  character is alphabet or not .
 *@c: This parameter receive a intener
 *
 *Description: prints lowercase caractwer
 *Return: integer
 */
int _isalpha(int c)
{
	int answer;

	answer = isalpha(c);
	return (answer);
}
