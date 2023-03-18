#include <stdio.h>

/**
 * main - is main fanction
 *
 * Return: success return 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes(s)", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)", (unsigned long)sizeof(f));
return (0);
}
