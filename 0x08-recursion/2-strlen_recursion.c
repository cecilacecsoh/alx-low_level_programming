#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: the input string
 *
 * Return: slength
 */
int _strlen_recursion(char *s)
{
	int slength = 0;

	if (*s)
	{
		slength++;
		slength += _strlen_recursion(s + 1);
	}
	return (slength);
}
