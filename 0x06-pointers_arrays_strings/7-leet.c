#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @n: input value
 *
 * Return: the value of n
 */

char *leet(char *n)
{
	int p;
	int q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[p] == s1[q])
			{
				n[p] = s2[q];
			}
		}
	}
	return (n);
}
