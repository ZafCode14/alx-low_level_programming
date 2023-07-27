#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to pointer to head
 * @str: pointer to str
 *
 * Return: pointer to new node or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
