#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list
 * @head: list
 * @index: index of the node, starting from 0
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i != index)
	{
		i++;
		head = head->next;
	}

	if (i == index)
		return (head);

	return (0);
}
