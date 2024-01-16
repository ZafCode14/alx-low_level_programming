#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low < pos || high > pos)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (value == array[pos])
				return (pos);
			else if (value > array[pos])
				low = pos + 1;
			else if (value < array[pos])
				high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}
	return (-1);
}
