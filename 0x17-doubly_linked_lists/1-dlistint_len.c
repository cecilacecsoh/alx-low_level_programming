#include "lists.h"

/**
 * dlistint_len - function return length of linkedlist
 *
 * @h: doubly linkedlist
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numelements = 0;

	while (h)
		h = h->next, numelements++;

	return (numelements);
}
