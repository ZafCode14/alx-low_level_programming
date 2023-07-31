#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
