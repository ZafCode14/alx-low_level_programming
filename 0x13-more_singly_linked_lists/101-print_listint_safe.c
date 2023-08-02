#include "lists.h"
/**
 * looped_listint_len - returns the number of nodes in a looped linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the looped list, or 0 if there is no loop
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 2;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			do {
				count++;
				fast = fast->next;
			} while (slow != fast);
			return (count);
		}
	}
	return (0);
}
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
