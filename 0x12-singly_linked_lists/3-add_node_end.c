#include "lists.h"

/**
 * str_len - checks the length of the string
 * @s: the string
 * Return: the length
 */

int str_len(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the link list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str == NULL)
	{
		return (NULL);
	}
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
