#include "main.h"

/**
 * print_alphabet - function prints the alphabet, in lowercase
 *
 * Return: Success 0
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
