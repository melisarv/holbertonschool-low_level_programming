#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of items
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, c_to, c_from;
	char buf[1024];
	long lenread, lenwrite;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	lenread = 1024;
	while (lenread == 1024)
	{
		lenread = read(fd_from, buf, 2014);
		if (lenread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file from %s\n", argv[1]);
			exit(98);
		}
		lenwrite = write(fd_to, buf, lenread);
		if (lenwrite != lenread)
		{
			lenwrite = -1;
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	c_from = close(fd_from);
	if (c_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	c_to = close(fd_to);
	if (c_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
