#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory, or exit with 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
