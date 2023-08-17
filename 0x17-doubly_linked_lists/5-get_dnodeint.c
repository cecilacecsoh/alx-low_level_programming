#include "lists.h"

/**
 * get_dnodeint_at_index - it returns the nth node of a dlistint_t linked list
 *
 * @head: the pointer to head of the list
 * @index: an index of the node to search for, starting from 0
 *
 * Return: nth node or
 *	if the node does not exist, return NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n_size;
	dlistint_t *tmp;

	n_size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == n_size)
		return (tmp);

	n_size++;
	tmp = tmp->next;
	}

	return (NULL);
}
