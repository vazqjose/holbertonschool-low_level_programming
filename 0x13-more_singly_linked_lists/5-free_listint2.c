#include "lists.h"

/**
 *free_listint2 - this will free the nodes
 *@head: will point to the beginning of the nodes
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
