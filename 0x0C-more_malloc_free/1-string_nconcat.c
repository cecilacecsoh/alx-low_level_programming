#include <stdlib.h>
#include<stdio.h>

/**
* _calloc - allocates memory for an array using malloc.
*
* @nmemb: input parameter
* @size: input parameter
*
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		{
		return (NULL);
		}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		{
		return (NULL);
		}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
