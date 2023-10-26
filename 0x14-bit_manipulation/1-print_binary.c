#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: unsigned long int. to convert to binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
