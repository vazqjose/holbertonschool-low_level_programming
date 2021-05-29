#include "hash_tables.h"

/**
 *create_hash_node - will create || add a node if there's collision
 *@key: it represent the beggining of a the list data
 *@ht: is the hash table that contain the array && size
 *@index: is the address to insert the data
 *@value: value is the next data in the list
 *Return: will return 1 if succeed creating || adding or 0 if fails
 */

int create_hash_node(hash_table_t *ht, const char *key, const char *value,
		     size_t index)
{
	hash_node_t *node = NULL;
	char *kye;
	char *val;

	node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (0);
	}

	kye = strdup(key);
	if (!kye)
	{
		free(node);
		return (0);
	}

	val = strdup(value);
	if (!val)
	{
		free(kye);
		free(node);
		return (0);
	}

	node->key = kye;
	node->value = val;

	if ((ht->array)[index] == NULL)
	{
		node->next = (ht->array)[index];
	}
	else
	{
		node->next = (ht->array)[index];
	}
	(ht->array)[index] = node;

	return (1);
}
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key string
 * @value: value associated with key, must be duplicated, can be empty
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *myval;
	hash_node_t *newItem;

	if (key == NULL || strlen(key) == 0 || ht == NULL ||
			ht->array == NULL || value == NULL)
	{
		return (0);
	}
	newItem = malloc(sizeof(hash_node_t));
	if (newItem == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newItem = ht->array[index];

	while (newItem && (strcmp(key, newItem->key) != 0))
	{
		newItem = newItem->next;
	}

	if (newItem != NULL)
	{
		myval = strdup(value);
		if (myval == NULL)
			return (0);

		newItem->value = myval;
		return (1);
	}

	return (create_hash_node(ht, key, value, index));
}

