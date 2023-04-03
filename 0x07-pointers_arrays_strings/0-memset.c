#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: the pointer to memory area
 * @n: the first byte to fill
 * @b: the constant byte
 *
 * Return: the pointer (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;
i
	x = 0;
	
	for (; n > 0 ; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
