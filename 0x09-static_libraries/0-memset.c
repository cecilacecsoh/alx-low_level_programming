#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @b: the desired value
 * @n: number of bytes to be changed
 * @s: the pointer to memory area
 * Return: the pointer (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0 ; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
