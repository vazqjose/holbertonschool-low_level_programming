#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to start
 * Return: EXIT_SUCCESS
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
