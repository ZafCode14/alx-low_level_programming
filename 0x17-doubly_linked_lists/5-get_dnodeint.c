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
	dlistint_t *temp = head;

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
