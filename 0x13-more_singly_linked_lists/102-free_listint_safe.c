#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to pointer to head
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			*h = temp;
			count++;
		}
		else
		{
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
