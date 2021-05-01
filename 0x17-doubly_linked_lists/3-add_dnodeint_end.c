#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to head of list
 * @n: value to add
 * Return: NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *new = malloc(sizeof(struct dlistint_s));
	struct dlistint_s *ptr = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

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
	new->prev = ptr;
	
	return(new);
}
