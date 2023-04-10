#include <stdio.h>

/**
* main - program prints all arguments it receives.
*
* @argc: argument counts
* @argv: argv
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
