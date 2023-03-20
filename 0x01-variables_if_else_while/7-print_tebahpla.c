#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: success is 0
 */

int main(void)
{
	char p;

	for (p = 'z' ; p >= 'a' ; p--)
		putchar(p);
	putchar('\n');
	return (0);
}
