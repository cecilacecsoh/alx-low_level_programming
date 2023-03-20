#include <stdio.h>

/**
 * main - prints the alphabet in lower_uppercase
 *
 * Return: Success 0
 */

int main(void)
{
	char q;

	for (q = 'a' ; q <= 'z' ; q++)
		putchar(q);
	for (q = 'A' ; q <= 'Z' ; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
