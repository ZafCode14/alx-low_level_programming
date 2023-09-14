#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node at an index
 * @h: pointer to pointer to the head node
 * @idx: the index where the node should be added
 * @n: the data for the newly created node
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *temp2, *temp3;
	unsigned int count = 0;

	for (temp3 = *h; temp3->next; count++)
		temp3 = temp3->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
	}
	else if (idx == count + 1)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}
	else if (idx > 0 && idx < count + 1)
	{
		for (; idx != 0; idx--)
			temp = temp->next;
		temp2 = temp->prev;
		temp2->next = new;
		new->prev = temp2;
		new->next = temp;
		temp->prev = new;
	}
	else if (idx > count + 1)
		return (NULL);
	return (new);
}
