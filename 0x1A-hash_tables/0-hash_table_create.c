#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of teh array
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t));

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
