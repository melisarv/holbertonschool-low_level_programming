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

void print_rev(char *s)
{
	int num = 0;
	int n;
	char *c = s;

	while (*(s + num) != '\0')
		num++;

	for (n = num; n >= 0; n--)
	{
		_putchar(*(c + n));
	}
	_putchar('\n');

}
