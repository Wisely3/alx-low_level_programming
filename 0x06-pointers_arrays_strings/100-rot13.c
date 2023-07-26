#include "main.h"

/**
 * rot13 - t encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: Pointer to string *s
 */

char *rot13(char *s)
{
	int p;
	int q;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxwzabcdefghijklm";
	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (s[p] == data1[q])
			{
				s[p] = datarot[q];
				break;
			}
		}
	}
	return (s);
}
