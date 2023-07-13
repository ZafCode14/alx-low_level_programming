#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array and initialize to 0
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer = NULL;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	pointer = malloc(total_size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		*((char *)pointer + i) = 0;
	return (pointer);
}

