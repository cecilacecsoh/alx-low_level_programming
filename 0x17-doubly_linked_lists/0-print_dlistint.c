#include "lists.h"

/**
 * print_dlistint - it prints all the elements of a dlistint_t list
 *
 * @h: doubly linkedlist
 *
 * Return: the  number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesno = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodesno++;

		h = h->next;
	}
	return (nodesno);
}
