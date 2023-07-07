#include <stdio.h>
#include "main.h"

/**
* flip_bits - function counts the number of bits to change
*		by change from one number to another
*
* @n: first number
* @m: the second number.
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n, count = 0;

	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (n = 63; n >= 0; n--)
	{
		current = exclusive >> i;
		if (current & 1)
		count++;
	}
	return (count);
}
