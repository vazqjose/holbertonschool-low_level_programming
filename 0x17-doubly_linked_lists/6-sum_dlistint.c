#include "lists.h"

/**
 * sum_dlistint - sum all elements of list
 * @head: pointer to linked list header
 * Return: total sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
