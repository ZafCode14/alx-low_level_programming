#include"main.h"
/**
 * swap_int - swapping using pointers
 * @a: pointer a.
 * @b: pointer b.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
