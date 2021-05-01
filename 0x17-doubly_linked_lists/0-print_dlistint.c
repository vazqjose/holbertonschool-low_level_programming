#include "lists.h"
/*
 * print_dlistint - prints all elements of list
 * @dlistint_t: linked list to print
 */
size_t print_dlistint(const dlistint_t *h)
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
