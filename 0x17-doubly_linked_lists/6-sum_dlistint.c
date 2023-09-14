#include "lists.h"
/**
 * sum_dlistint - sums all the data (n)
 * @head: pointer to the head node
 *
 * Return: the sum of all data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
