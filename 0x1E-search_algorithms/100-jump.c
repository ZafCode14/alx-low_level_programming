#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 on fail
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0;
	int step = (int)sqrt(size);
	int low, high;

	if (array == NULL)
		return (-1);

	while (array[i] < value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i + step;
	}

	low = i - step;
	high = i;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i <= high; i++)
	{
		if (i < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
