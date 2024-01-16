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
 * binary_s - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @l: left index
 * @r: right index
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int binary_s(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
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
/**
 * exponential_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 on fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	low = i / 2;
	high = i < size ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (binary_s(array, low, high, value));
}
