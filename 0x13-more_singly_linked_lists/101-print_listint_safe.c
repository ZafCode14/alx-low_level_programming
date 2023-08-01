#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
