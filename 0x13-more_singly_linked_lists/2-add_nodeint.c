#include "lists.h"
/**
 * add_nodeint - adds a new node at the begging of list
 * @head: head of the link list
 * @n: integer data of list
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
