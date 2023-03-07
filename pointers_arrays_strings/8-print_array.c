#include "main.h"
/**
 *print_array - array int
 *@a: the array
 *@n: the size of the array
 *Description: print int array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
