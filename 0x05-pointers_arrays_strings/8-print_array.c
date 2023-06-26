#include<stdio.h>
/**
 * print_array - printing the array
 * @a: pointer to array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			printf("\n");
		else
			printf(", ");
	}
}
