#include "main.h"

/**
 *flip_bits - function that returns the number of bits you would need
 *	to flip to get from one number to another
 *@n: first number
 *@m: second number
 *
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_flip = n ^ m;
	int num_bits = 0;

	while (num_flip)
	{
		if (num_flip & 1)
			num_bits++;
		num_flip >>= 1;
	}
	return (num_bits);
}
