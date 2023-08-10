#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a tring contains non-digit character
 * @s: input string
 *
 * Return: 0 otherwise 1
 */

int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}

	return (1);
}

/**
 * _strlen - returns length of a given string
 * @s: input string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * errors - handles errors for the main
 *
 * Return: void
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the count or number of armuments
 * @argv: the vector or array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int length, carry, length1, length2, j, num1, num2, *result, c = 0;
	char *str1, *str2;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (j = 0; j <= length1 + length2; j++)
		result[j] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			carry += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (j = 0; j < length - 1; j++)
	{
		if (result[j])
			c = 1;
		if (c)
			_putchar(result[j] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
