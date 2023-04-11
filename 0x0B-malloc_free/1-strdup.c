#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *cha;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	cha = malloc(sizeof(char) * (i + 1));
	if (cha == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		cha[r] = str[r];

	return (cha);
}

