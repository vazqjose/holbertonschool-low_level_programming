#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head pointer of type listint_t
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *toDelete;
	int val;

	if (*head == NULL)
		return (0);

	toDelete = *head;
	*head = toDelete->next;

	val = toDelete->n;

	free(toDelete);
	return (val);
}
