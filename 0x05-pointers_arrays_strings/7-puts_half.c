#include "holberton.h"

/**
 * puts_half - entry point
 * Description: function that prints half of a string
 * @str: point to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

