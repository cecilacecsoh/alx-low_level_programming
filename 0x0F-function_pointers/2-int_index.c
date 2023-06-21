#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array:  pointer to array of integers
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: index of first element or
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
