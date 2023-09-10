#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - function  deletes a hash table
 *
 * @ht: a pointer to the hash table
 *
 * Return: NULL.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		tmp1 = ht->array[n];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}

	free(ht->array);
	free(ht);
}
