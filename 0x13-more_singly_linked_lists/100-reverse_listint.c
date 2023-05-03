#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
*
* @head: pointer to the first node
*
* Returns: a pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}
	*head = first;
	return (*head);
}
