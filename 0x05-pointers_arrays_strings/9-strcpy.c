#include "holberton.h"

/**
 * _strcpy - entry point
 * Description: function that copies the string pointed to the buffer pointed
 * @dest: destination pointer
 * @src: initial pointer to be copied
 * Return: pointer copied
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
