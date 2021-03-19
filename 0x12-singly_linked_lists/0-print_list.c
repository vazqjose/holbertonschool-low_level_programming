#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: input list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}

		h = h->next;
		i++;
	}
	return (i);
}
