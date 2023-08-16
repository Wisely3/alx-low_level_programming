#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the opcodes of its own main function.
* @argc: argument count
* @argv: argument vector
*
* Return: incorrect number, print Error and negative number, print Error
*/

int main(int argc, char *argv[])
{
	int number, value;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (value = 0; value < number; value++)
	{
		if (value == number - 1)
		{
			printf("%02hhx\n", ptr[value]);
			break;
		}
		printf("%02hhx ", ptr[value]);
	}
	return (0);
}
