#include "main.h"

/**
 * read_textfile- a function that reads a text file and prints
 *		it to the POSIX standard output
 * @filename: input text file to be read
 * @letters: the count of letters to be read
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text;
	ssize_t actualn;
	ssize_t fd;
	char *ptr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);

	text = read(fd, ptr, letters);
	actualn = write(STDOUT_FILENO, ptr, text);

	free(ptr);
	close(fd);

	return (actualn);
}
