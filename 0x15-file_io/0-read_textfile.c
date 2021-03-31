#include "holberton.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: file name
 * @letters: number of letters to be read and print
 * Return: actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, countread, countwrite;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	countread = read(fd, buf, letters);

	if (countread == -1)
	{
		return (0);
	}

	countwrite = write(STDOUT_FILENO, buf, countread);

	if (countwrite == -1)
	{
		return (0);
	}

	free(buf);
	close(fd);
	return (countwrite);
}
