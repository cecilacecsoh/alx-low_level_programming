#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @n: number to extract the last digit from
 * Return: Success gives last digit of number
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}

