#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node of listint_t
 * @n: input data
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element;

	element = malloc(sizeof(listint_t));
	if (!element)
		return (NULL);

	element->n = n;
	element->next = *head;
	*head = element;

	return (element);
}
