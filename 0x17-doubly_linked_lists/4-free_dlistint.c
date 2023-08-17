#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: a pointer to head of the list
 *
 * Return: None.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->nxt)
	{
		head = head->nxt;
		free(head->prev);
	}

	free(head);
}