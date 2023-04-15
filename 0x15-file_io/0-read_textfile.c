#include "main.h"

/**
 * read_textfile - reads a file and prints its content to standard output
 * @filename: string
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *x;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (!x)
		return (0);
	n = read(fd, x, letters);
	if (n == -1)
	{
		free(x);
		return (0);
	}
	n = write(STDOUT_FILENO, x, n);
	if (n == -1)
	{
		free(x);
		return (0);
	}
	close(fd);
	free(x);
	return (n);
}
