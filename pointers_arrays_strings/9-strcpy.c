#include "main.h"
#include <string.h>
/**
 **_strcpy - copy a string of character
 *@dest: Destination
 *@src: Source
 *Description: copy a string
 *Return: A string
*/
char *_strcpy(char *dest, char *src)
{
	char *copy;

	copy = strcpy(dest, src);
	return (copy);
}
