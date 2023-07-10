#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character passed to the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
