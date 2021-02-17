#include "holberton.h"

/**
 * _puts - entry point
 *
 * Description: function that prints a string
 *
 * @str: point to be printed
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	if (*str == '\0')
	{	_putchar('\n');
		return;
	}

	_putchar(*str);
	_puts(++str);
}
