#include "lists.h"
/**
 * add_node - adds a node at the beginning of the list
 * @head: pointer to pointer to head node
 * @str: pointer to str
 *
 * Return: the address of ne element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str ==NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
