#include "lists.h"
/**
 * dlistint_len - prints all elements of list
 * @h: pointer to linked list header
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
