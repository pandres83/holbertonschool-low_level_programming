#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 *@c: the character to print
 *Return: om succes 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
