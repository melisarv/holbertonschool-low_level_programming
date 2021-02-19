#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * Description: function that concatenates two strings
 * @dest: destination string to be overwritten
 * @src: string to be added
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, lendest = 0, lensrc = 0;

	while (dest[lendest])
		lendest++;

	while (src[lensrc])
		lensrc++;

	while (n < lensrc)
	{
		dest[lendest] = src[n];
		n++;
		lendest++;
	}

	return (dest);
}
