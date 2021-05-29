#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key string
 * @value: value associated with the key, must be duplicated, can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *myval;
	hash_node_t* newItem;

	if (key == NULL || strlen(key) == 0 || ht == NULL || ht->array == NULL || value == NULL)
	{
		return (0);
	}
	newItem = malloc(sizeof(hash_node_t));
	if (newItem == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	
	newItem = ht->array[index];

	while (newItem && (strcmp(key, newItem->key) != 0))
	{
		newItem = newItem->next;
	}
	myval = strdup(value);

	if (myval == NULL)
	{
		return (0);
	}
	else
	{
		newItem->value = myval;
		return (1);
	}
}

