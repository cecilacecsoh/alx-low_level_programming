#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - it adds a new node at the end
  *			of a doubly linked list
  *
  * @head: The head of the doubly linked list
  * @n: number to place in the new node.
  *
  * Return: the address of the new element,
  *		or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		new_elem = *head;
		while (new_elem->next != NULL)
			new_elem = new_elem->next;

		new_node->next = NULL;
		new_node->prev = new_elem;
		new_elem->next = new_node;

		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
