#include "holberton.h"

/**
 * puts2 - entry point
 * Description: function that prints every other character of a string
 * @str: point to be printed
 * Return: void
 */

void puts2(char *str)
{
	int len = 0, n = 0;

	while (str[len] != '\0')
		len++;

	while (n < len)
	{
		_putchar(str[n]);
		n = n + 2;
	}

	_putchar('\n');
}
