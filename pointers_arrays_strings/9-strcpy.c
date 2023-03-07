#include "main.h"
#include <string.h>
/**
 *_strcpy - copy a string of character
 *src: source
 *@dest:destiny
 *Description: copy a string
*/
char *_strcpy(char *dest, char *src)
{
	char *copy;

	copy = strcpy(dest, src);
	return(copy);
}
