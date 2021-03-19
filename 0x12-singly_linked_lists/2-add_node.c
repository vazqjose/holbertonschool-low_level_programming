#include "lists.h"

/**
 * add_node - adds a new node at the begging of a list
 * @head: head of the link list
 * @str: string of the link list
 * Return: the address of the new element, or NULL if it fails
 */

 list_t *add_node(list_t head, const char *str)
{
	list_t *new_node;

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

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
