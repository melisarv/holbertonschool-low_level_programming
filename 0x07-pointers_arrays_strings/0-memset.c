#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the pointer of the memory area to be fill
 * @b: the constant byte
 * @n: the size to fill
 *
 * Return: pointer to the memory area result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
