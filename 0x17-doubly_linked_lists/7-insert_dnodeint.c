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
	unsigned int i = 0;

	dlistint_t *newNode;
	dlistint_t *tmp;

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
		return(add_dnodeint(h, n));

	tmp = *h;

	while (i < idx - 1)
	{
		i++;
		tmp = tmp->next;

		if (tmp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}

	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}