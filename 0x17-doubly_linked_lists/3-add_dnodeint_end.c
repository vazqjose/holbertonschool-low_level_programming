#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to head of list
 * @n: value to add
 * Return: NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_s *new;
	dlistint_s *ptr = *head;

	new = malloc(sizeof(dlistint_s));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return(0);
	}

	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr
	new->next = NULL;

	return(new);
}
