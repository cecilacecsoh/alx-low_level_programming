#include "main.h"
#include <stdio.h>

/**
* set_bit - function sets a bit at a given index to 1
*
* @n: pointer to the number to change.
* @index: index of the bit set to 1
*
* Return: Success 1 or -1 for failure.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
