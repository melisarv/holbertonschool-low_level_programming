#include "holberton.h"

/**
 * print_rev - entry point
 *
 * Description: function that prints a string in reverse
 *
 * @s: point to be printed
 *
 * Return: void
 *
 */

int _len(char *c)
{
	int num = 0;

	while (*(c + num) != '\0')
		num++;

	return (num);
}

void print_rev(char *s)
{
	int len, n;

	len = _len(s);

	for (n = len; n >= 0; n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
