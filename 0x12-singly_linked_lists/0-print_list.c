#include <stdio.h>
#include "lists.h"


/**
 * print_list - that prints all the elements of a list_t list.
 *
 * @h: pointer to list_t
 *
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}
