#include "lists.h"
/**
 * dlistint_len - count the number of elements in a linked list
 * @h: pointer to the head node of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
