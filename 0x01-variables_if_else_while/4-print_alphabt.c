#include <stdio.h>

/**
 * main - prints alphabet in lowercase excepr q, e
 *
 * Return: Success 0
 */

int main(void)
{
	char q;

	for (q = 'a' ; q <= 'z' ; q++)
		if (q != 'q' && q != 'e')
			putchar(q);
	putchar('\n');
	return (0);
}
