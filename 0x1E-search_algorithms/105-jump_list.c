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
	listint_t *temp2 = list;
	size_t step = sqrt(size), from, to, i;

	if (list == NULL)
		return (NULL);

	while (temp->n < value && temp->index < size - 1)
	{
		for (i = 0; i < step && temp->index < size - 1; i++)
			temp = temp->next;
		printf("Value checked at index[%ld] = [%d]\n", temp->index, temp->n);
	}

	for (from = 0; from < temp->index; from += step)
		;
	from -= step;
	to = temp->index;
	printf("Value found between indexes [%ld] and [%ld]\n", from, to);

	while (temp2->index < from)
		temp2 = temp2->next;

	while (temp2->index <= to)
	{
		printf("Value checked at index[%ld] = [%d]\n", temp2->index, temp2->n);
		if (temp2->n == value)
			return (temp2);

		if (temp2->index < to)
			temp2 = temp2->next;
		else
			break;
	}
	return (NULL);
}
