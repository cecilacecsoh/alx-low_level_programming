#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name
 *
 * @argc: number counts of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
