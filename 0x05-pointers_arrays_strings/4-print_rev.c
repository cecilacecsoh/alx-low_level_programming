#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line.
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int z;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (z = length; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
