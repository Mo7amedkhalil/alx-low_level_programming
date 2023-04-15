#include "main.h"

/**
 * create_file - creates a new file and writes to it
 * @filename: string
 * @text_content: content of the file
 * Return: 1 (on Success), -1 (on failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
		x = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (x == -1)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
		x = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (x == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - calculates the length of a string
 * @text: string
 * Return: the length of the string
 */
int _strlen(char *text)
{
	int i = 0;

	while (text[i])
		i++;
	return (i);
}
