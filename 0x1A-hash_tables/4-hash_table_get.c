#include "hash_tables.h"

/*
 * hash_table_get - get value at key index
 * @ht: hash table
 * @key: begining of list
 * Return: value or otherwise return NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *myNode;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	myNode = ht->array[index];

	while (node != NULL && (strcmp(key, mode->key) != 0))
		node = node->next;

	if (node ==NULL)
		return (NULL);

	return (node->value);
}
