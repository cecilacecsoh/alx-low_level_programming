#include "hash_tables.h"

/**
 * shash_table_create - it creates a shash table with a given size
 *
 * @size: size of the shash table
 *
 * Return: the created shash table,
 *	or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int n;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array[n] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - function adds a node at the
 *		beginning of a shash at a given index
 *
 * @h: the head of the shash linked list
 * @key: a key of the shash
 * @value: the value to store
 *
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

/**
 * add_i_shash - function adds a node on the DLL of the shash table
 *
 * @ht: a pointer to the table
 * @new: a new node to add
 *
 * Return: Null.
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int rt;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		rt = strcmp(new->key, tmp1->key);
		if (rt == 0)
		{
			return;
		}
		else if (rt < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - function adds a hash
 *		(key, value) to a given shash table.
 *
 * @ht: pointer to the shash table.
 * @key: key of the shash.
 * @value: the value to store.
 *
 * Return: 1 if successes,
 *	or 0 if fails.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_indx;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_indx = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[k_indx]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - function  that retrieves a value associated with a key
 *
 * @ht: a pointer to the shash table.
 * @key: th key of the shash
 *
 * Return: the value of the shash
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_indx;
	shash_node_t *tmp;

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

/**
 * shash_table_print - it prints the keys and values of the shash table.
 *
 * @ht: a pointer to the shash table.
 *
 * Return: Null.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *septr;

	if (ht == NULL)
		return;

	printf("{");
	septr = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", septr, tmp->key, tmp->value);
		septr = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - function prints the keys and values
 *			of the shash table in reverse.
 *
 * @ht: a pointer to the shash table.
 *
 * Return: NULL.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *septr;

	if (ht == NULL)
		return;

	printf("{");
	septr = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", septr, tmp->key, tmp->value);
		septr = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - function deletes a shash table
 *
 * @ht: a pointer to the shash table
 *
 * Return: NULL
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int n;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

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
