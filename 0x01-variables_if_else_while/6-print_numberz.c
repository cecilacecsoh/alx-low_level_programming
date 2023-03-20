#include <stdio.h>

/**
 * main - prints all single digit num of base 10 from 0
 *
 * Return: Success is 0
 */

int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	putchar('\n');
	return (0);
}
