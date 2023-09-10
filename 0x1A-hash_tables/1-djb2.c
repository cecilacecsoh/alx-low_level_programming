#include "hash_tables.h"

/**
 * hash_djb2 - a hash function that generates a random number through
 *		a string given (hash number)
 *
 * @str: a string
 *
 * Return: a hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int n;

	hash = 5381;
	while ((n = *str++))
	{
		hash = ((hash << 5) + hash) + n; /* hash * 33 + n */
	}
return (hash);
}
