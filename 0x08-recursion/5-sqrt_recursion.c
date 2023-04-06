#include "main.h"

/**
 * _sqrt_recursion - function returns the natural squareroot of a number.
 *
 * @n: input number to calculate
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 *
 * @n: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the square root
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}

