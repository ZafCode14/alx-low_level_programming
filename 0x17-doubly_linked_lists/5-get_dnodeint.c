#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: pointer to the head node
 * @index: the index needed
 *
 * Return: the indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
