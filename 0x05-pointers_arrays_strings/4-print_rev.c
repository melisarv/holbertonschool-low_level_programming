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

	while (s[num] != '\0')
		num++;

	while (num >= 0)
	{
		--num;
		_putchar(s[num]);
	}
	_putchar('\n');

}
