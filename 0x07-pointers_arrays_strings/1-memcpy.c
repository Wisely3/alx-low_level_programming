#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of times for copying
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
