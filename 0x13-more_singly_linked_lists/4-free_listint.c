#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
