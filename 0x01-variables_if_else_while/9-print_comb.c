#include <stdio.h>

/**
 * main - combinations of single-digit numbers with , separation
 *
 * Return: Success is 0
 */

int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
	{
		if (p == 0)
			putchar(p + '0');
		else
		{
			putchar(p + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
