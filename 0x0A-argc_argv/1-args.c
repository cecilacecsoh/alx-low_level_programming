#include <stdio.h>

/**
* main - a program that prints number of arguments passed
*
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
