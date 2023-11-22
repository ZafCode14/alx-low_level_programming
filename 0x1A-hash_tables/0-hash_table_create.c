#include "hash_tables.h"

/**
 * hash_table_create - ceates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(sizeof(hash_node_t *), size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
