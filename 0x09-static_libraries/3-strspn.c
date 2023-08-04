#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: number of bytes in initial s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int q;

	while (*s)
	{
		for (q =  0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				j++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
