#include "search_algos.h"
/**
 * print_array - prints the array
 * @l: the first index to print
 * @r: the last index to print
 * @array: the array to print
 *
 * Return: void
 */
void print_array(size_t l, size_t r, int *array)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[r]);
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);

	while (l < m || r > m)
	{
		m = l + (r - l) / 2;
		print_array(l, r, array);
		if (value == array[m])
			return (m);
		else if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
	}
	return (-1);
}
