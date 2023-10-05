#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: pointer to the key
 * @value: pointer to the value
 *
 * Return: 1 if succeeded or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	char *value_dup;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_dup;
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dup;
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
