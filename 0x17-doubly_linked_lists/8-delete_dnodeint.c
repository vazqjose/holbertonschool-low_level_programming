#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: head of list
 * @index: index of the node that should be deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *myPtr = *head;
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(myPtr);
		(*head)->prev = NULL;
		return (1);
	}


	while(myPtr != NULL)
	{
		if (i == index)
		{
			temp = myPtr->prev;
			temp->next = myPtr->next;
			myPtr->next->prev = temp;
			free(myPtr);
			myPtr = NULL;
			return (1);
		}
		else
		{
			myPtr = myPtr->next;
			i++;
		}
	}
	return (1);
}
