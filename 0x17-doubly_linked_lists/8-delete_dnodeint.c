#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to ponter to head node
 * @index: the indexed of the node to be deleted
 *
 * Return: 1 if success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	for (; temp->next; count++)
		temp = temp->next;
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(temp);
	}
	else if (index < count && index > 0)
	{
		for (; index > 0; index--)
			temp = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	else if (index == count)
	{
		while (temp->next)
			temp = temp->next;
		if (temp->prev)
			temp->prev->next = NULL;
		else
			*head = NULL;
		free(temp);
	}
	else
		return (-1);
	return (1);
}
