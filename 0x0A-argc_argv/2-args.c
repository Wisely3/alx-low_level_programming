#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count of the argument
 * @argv: vector of the argument
 * all arguments should be printed, including the first one
 * only print one argument per line, ending with a new line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
