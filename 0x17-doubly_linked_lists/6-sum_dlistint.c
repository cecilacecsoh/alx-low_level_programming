#include "lists.h"

/**
 * sum_dlistint - it returns the sum of all the data (n)
 *		of a doubly linked list
 *
 * @head: head of the list
 *
 * Return:the sum of all the data
 *	if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add_sum += head->n;
			head = head->next;
		}
	}
	return (add_sum);
}
