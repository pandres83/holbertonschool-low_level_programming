/**
 *swap_int - this algorithm changes the value oa variable for 98
 *@a: pointer
 *@b: second pointer
 *
 *Description: pointers
*/
void swap_int(int *a, int *b)
{
	int A;
	int B;

	A = *a;
	B = *b;

	*a = B;
	*b = A;
}
