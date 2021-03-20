#include "lists.h"

/**
 *free_listint - this will free the nodes
 *@head: will point to the beginning of the nodes
 *Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
    {
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
