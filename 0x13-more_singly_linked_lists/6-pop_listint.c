#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: pointer to pointer to head
 *
 * Return: the data of head node (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
