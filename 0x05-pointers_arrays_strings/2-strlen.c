#include "holberton.h"

/**
 * _strlen - entry point
 *
 * Description: function that returns the length of a string
 *
 * @s: point to be measured
 *
 * Return: void
 *
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(++s));

}
