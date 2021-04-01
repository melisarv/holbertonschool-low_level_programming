#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add
 * Return: integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size = 0, countwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

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
