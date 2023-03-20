#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Success is 0
 */

int main(void)
{
	int q;
	char c;

	for (q = 0 ; q < 10; q++)
		putchar(q + '0');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
