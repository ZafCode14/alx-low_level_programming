#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	listint_t *prev;
	size_t step = sqrt(size), i;

	if (list == NULL)
		return (NULL);

	while (temp->n < value && temp->index < size - 1)
	{
		prev = temp;
		for (i = 0; i < step && temp->index < size - 1; i++)
			temp = temp->next;
		printf("Value checked at index[%ld] = [%d]\n", temp->index, temp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);

	while (prev != NULL)
	{
		printf("Value checked at index[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
