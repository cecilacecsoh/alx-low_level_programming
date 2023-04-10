#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the words to be checked
 * Return: Success is 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
