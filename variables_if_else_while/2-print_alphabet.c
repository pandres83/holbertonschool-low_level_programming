#include <stdio.h>
/*
 *Excercise two - project: C - Variables, if, else, while
 *Description: prints the alphabet in lower case
 */
int main(void)
{
	char lc;
	for(lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
