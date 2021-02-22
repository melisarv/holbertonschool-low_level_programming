#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the pointer of the memory area to be fill
 * @src: the pointer of the memory area to be copied
 * @n: the size to fill
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
