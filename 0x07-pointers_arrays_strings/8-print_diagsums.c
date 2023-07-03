#include<stdio.h>
/**
 * print_diagsums - print the sum of diagonals
 * @a: pointer to the array
 * @size: size of the 2d array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
