#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string to be overwritten
 * @src: string to be copied
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, lendest = 0, lensrc = 0;

	while (dest[lendest])
		lendest++;

	while (src[lensrc])
		lensrc++;

	while (i < n && i <= lendest)
	{
		if (i <= lensrc)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}

	dest[lendest] = '\0';

	return (dest);
}
