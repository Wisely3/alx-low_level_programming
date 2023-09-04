#include "main.h"
#include <stdio.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - a function that allocates 1024 bytes for the buffer
 * @file: file for buffer for storing chars
 *
 * Return: the new buffer that has been alloacted
 */

char *create_buffer(char *file)
{
	char *ptr_buf;

	ptr_buf = malloc(sizeof(char) * 1024);

	if (ptr_buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (ptr_buf);
}

/**
 * close_file - a function that closes file descriptors
 * @fd: file descriptor that is to be closed
 *
 * Return: Nothing
 */

void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a function that copies contents of a file to another file
 * @argc: number of arguments entered
 * @argv: array of pointers to the arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	char *ptr_buf;
	int initial, final, rd, wrt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ptr_buf = create_buffer(argv[2]);
	initial = open(argv[1], O_RDONLY);
	rd = read(initial, ptr_buf, 1024);
	final = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (initial == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(ptr_buf);
			exit(98);
		}

		wrt = write(final, ptr_buf, rd);
		if (final == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(ptr_buf);
			exit(99);
		}

		rd = read(initial, ptr_buf, 1024);
		final = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(ptr_buf);
	close_file(initial);
	close_file(final);

	return (0);
}
