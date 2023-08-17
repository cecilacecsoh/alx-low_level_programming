#include "lists.h"

/**
 * add_dnodeint - it adds a new node at the beginning.
 *
 * @head: doubly linkedlist
 * @n: value of node
 *
 * Return: the address of the new element,
 *		or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newest_node = malloc(sizeof(dlistint_t));

	if (!newest_node || !head)
		return (NULL);

	newest_node->n = n;
	newest_node->next = *head;
	newest_node->prev = NULL;
	if (*head)
		(*head)->prev = newest_node;

	*head = newest_node;

	return (newest_node);
}
