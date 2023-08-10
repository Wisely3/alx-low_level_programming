#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * _atoi -  converts a string to an integer
 * @s: Pointer to conver
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[a] - '0');
			a++;
		}
		if (isi == 1)
		{
			break;
		}
		a++;
	}
	ni *= min;

	return (ni);
}

/**
 * print_int - prints an integer
 * @n: an input integer
 *
 *Return: Always 0;
 */

void print_int(unsigned long int n)
{
	unsigned long int ni = 1, j, resp;

	for (j = 0; n / ni > 9; j++, ni *= 10)
		;

	for (; ni >= 1; n %= ni, ni /= 10)
	{
		resp = n / ni;
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
	int p = 0, q = 0;

	if (argc == 3)
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		printf("%d\n", p * q);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
