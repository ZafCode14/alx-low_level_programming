#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of the linked list
 * @head: pointer to pointer to head node
 * @n: the value of the node
 *
 * Return: the address of the new node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
