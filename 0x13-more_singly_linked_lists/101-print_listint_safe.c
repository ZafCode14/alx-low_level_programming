#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *next = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		next = current->next;

		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = next;
	}

	return (count);
}
