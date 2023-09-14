#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
