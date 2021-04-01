#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size = 0, countwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;

	countwrite = write(fd, text_content, size);
		if (countwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
