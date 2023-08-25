#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: the string
 * @c: the character in the string
 *
 * Return: null (\0)
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
