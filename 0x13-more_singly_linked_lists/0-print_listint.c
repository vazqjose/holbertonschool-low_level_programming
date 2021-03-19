#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: string - (malloc'ed string)
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
