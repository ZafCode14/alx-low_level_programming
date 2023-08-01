#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to pointer to head
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (count);
}
