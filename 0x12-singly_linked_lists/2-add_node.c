#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - that adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to pointer of head list_t
 * @str: string to be added to the list_t node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
