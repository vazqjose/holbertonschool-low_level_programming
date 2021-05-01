#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to head of list
 * @n: value to add
 * Return: NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *lastNode;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);
}
