#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index of the list where the new node should be added
 * @n: value to add
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (*head != NULL && i < idx - 1)
	{
		i++;
		tmp = tmp->next;
	}

	if (i == idx - 1)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;

		newNode->next = tmp->next;
		tmp->next = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
