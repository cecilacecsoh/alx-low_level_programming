#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 *
 * @h: linked list of type listint_t
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
