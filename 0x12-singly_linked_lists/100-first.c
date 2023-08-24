#include <stdio.h>

/**
 * bmain - a functio that is executed before the main one
 *
 * Return: Nothing (void)
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
