#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer to head node
 * @idx: index of the list where new node should be added
 * @n: number tha will be added
 *
 * Return: the address of new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp1, *temp2;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp1 = *head;
	while (idx > 1)
	{
		if (temp1 == NULL)
			return (NULL);
		temp1 = temp1->next;
		idx--;
	}
	temp2 = temp1->next;
	temp1->next = new;
	new->next = temp2;

	return (new);
}
