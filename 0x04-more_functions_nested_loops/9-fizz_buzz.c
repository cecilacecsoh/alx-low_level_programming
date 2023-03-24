#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * For multiples of three prints Fizz
 * For the multiples of five prints Buzz
 * For both multiple of three and five print FizzBuzz
 *
 * Return: Success is 0
 */

int main(void)
{
	char i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(" FizzBuzz");
		}
		else if (i == 1)
		{
			_putchar("%d", i + '0');
		}
		else
		{
			_putchar(" %d", i + '0');
		}
	}
	_putchar('\n');

	return (0);
}
