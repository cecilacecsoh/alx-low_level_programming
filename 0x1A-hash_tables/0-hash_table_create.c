#include "hash_tables.h"

/**
 * hash_table_create -  a function that creates a hash table.
 *
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table
 *	or a NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int n;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array[n] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
