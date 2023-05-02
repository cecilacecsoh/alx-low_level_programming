/**
 * pop_listint - deletes the head node of a listint_t linked list, 
 * and returns the head node’s data (n).
 *
 * @head: pointer to pointer in listint_t
 *
 * Return: the head node’s data, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	unsigned int new_n;

	if (!head || !*head)
		return (0);

	new_n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (new_n);
}
