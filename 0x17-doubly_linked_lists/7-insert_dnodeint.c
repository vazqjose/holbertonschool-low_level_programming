#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head double ptr
 * @idx:  index of the list where the new node should be added
 * @n: value of nod
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmpNode;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	tmpNode = *h;
	while (index != idx)
	{
		tmpNode = tmpNode->next;
		index++;

		if (tmpNode == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	tmpNode->prev->next = new_node;
	new_node->next = tmpNode;
	new_node->prev = tmpNode->prev;
	tmpNode->prev = new_node;

	return (new_node);
}
