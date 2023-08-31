#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 *		to an unsigned int
 * @b: string having a binary number
 *
 * Return: converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num;
	int length, base;

	if (!b)
		return (0);

	dec_num = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base = 1; length >= 0; length--, base *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			dec_num += base;
		}
	}

	return (dec_num);
}
