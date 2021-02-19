#include "holberton.h"

/**
 * _strncat - function that concatenates two strings with n bytes
 * @dest: destination string to be overwritten
 * @src: string to be added
 * @n: number of bytes to add
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lendest = 0, lensrc = 0;

	while (dest[lendest])
		lendest++;

	while (src[lensrc])
		lensrc++;

	while (i < n && i < lensrc)
	{
		dest[lendest] = src[i];
		i++;
		lendest++;
	}

	return (dest);
}
