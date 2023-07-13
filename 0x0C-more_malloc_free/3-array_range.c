#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers from min to max
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *pointer = NULL;
	int len = max - min + 1;
	int i;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * len);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		pointer[i] = min;
		min++;
	}
	return (pointer);
}

