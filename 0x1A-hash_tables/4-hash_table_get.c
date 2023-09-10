#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get -function retrieves a value associated with a key
 *
 * @ht: a pointer to the hash table
 * @key: the key of the hash
 *
 * Return: th value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_indx;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_indx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_indx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
