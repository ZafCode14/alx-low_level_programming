#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node of a linked list
 * @head: pointer to head
 * @index: the index of the node
 *
 * Return: pointer to node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (index > 0)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index--;
	}
	return (temp);
}
