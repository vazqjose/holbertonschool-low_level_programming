#include "lists.h"

/**
 * list_len - returns number of elemtns
 * @h: input list
 * Return: Number of nodes
 */


size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
