#include <stdio.h>

void first_on_main(void) __attribute__ ((constructor));

/**
 * first_on_main - prints words before the main function is executed.
 *
 * Returns: void
 */
void first_on_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

