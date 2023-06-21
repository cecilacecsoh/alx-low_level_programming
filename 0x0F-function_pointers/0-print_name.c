#include <stdio.h>

/**
* print_name -  the function print a name
*
* @name: character pointer parameter
* @f: pointer to function
*
* Return: void
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}

