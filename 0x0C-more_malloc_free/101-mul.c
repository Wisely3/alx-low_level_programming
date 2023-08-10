#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
}

/**
 * _atoi -  converts a string to an integer
 * @s: Pointer to convert
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int value = 1;
	unsigned long int resp = 0, num1, j;

	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			value *= -1;
		}
	}

	for (j = num1; s[j] >= 48 && s[j] <= 57; j++)
	{
		resp *= 10;
		resp += (s[j] - 48);
	}

	return (value * resp);
}

/**
 * print_int - prints an integer
 * @n: an input integer
 *
 *Return: Always 0;
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, j, resp;

	for (j = 0; n / div > 9; j++, div *= 10)
		;

	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: the count of the argument
 * @argv: the vector of the argument
 *
 * Return: Always 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
