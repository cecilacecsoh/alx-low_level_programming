#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * 		 of listint_t linked list.
 *
 * @head: first node in listint_t linked list
 *
 * Return: the sum, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int sum = 0;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}

	return (sum);
}
