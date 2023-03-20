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
		putchar(p + '0');
		if (p != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
