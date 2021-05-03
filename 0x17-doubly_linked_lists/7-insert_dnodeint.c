#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head double ptr
 * @idx:  index of the list where the new node should be added
 * @n: value of nod
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = dlistint_len(*h);
	unsigned int i = 0;
	dlistint_t *newNode, *tmp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));
	if (idx > len)
		return (NULL);

	tmp = *h;
	while (i < idx)
	{
		i++;
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	tmp->prev->next = newNode;
	newNode->next = tmp;
	newNode->prev = tmp->prev;
	tmp->prev = newNode;
	return (newNode);
}
