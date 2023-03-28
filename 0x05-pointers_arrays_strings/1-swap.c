#include "main.h"

/**
 * swap_int -function that swaps the values of two integers
 * @a: is the integer to swap
 * @b: another integer to swap
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
