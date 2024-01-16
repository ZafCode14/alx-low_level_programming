#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;
	skiplist_t *prev;

	if (list == NULL)
		return (NULL);

	while (temp->n < value)
	{
		if (temp->express == NULL)
		{
			prev = temp;
			while (temp->next != NULL)
				temp = temp->next;
			break;
		}
		prev = temp;
		temp = temp->express;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);

	while (prev != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
