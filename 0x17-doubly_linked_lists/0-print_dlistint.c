#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: pointer to linked list header
 * Return: Number of elements
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
