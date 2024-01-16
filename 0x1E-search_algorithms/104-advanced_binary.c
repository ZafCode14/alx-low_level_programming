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
 * binary_recursion - recursivly search for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @l: Left index
 * @r: Right index
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int binary_recursion(int *array, size_t l, size_t r, int value)
{
	int m;

	if (l <= r)
	{
		m = l + (r - l) / 2;
		print_array(l, r, array);

		if (value == array[m] && (m == 0 || value != array[m - 1]))
			return (m);
		else if (value <= array[m])
			return (binary_recursion(array, l, m, value));
		else
			return (binary_recursion(array, m + 1, r, value));
	}
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	return (binary_recursion(array, l, r, value));
}
