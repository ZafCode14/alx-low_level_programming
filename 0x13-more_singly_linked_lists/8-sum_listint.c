#include "lists.h"

/**
 * sum_listint - sums all the data of n from the linked list
 * @head: pointer to the head
 *
 * Return: the sum of all n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
