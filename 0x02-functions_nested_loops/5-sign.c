#include "holberton.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: integer to be changed
 * Return: integer result
 */

int print_sign(int n)
{
	int r = 0;

	if (n > 0)
	{
		r = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		r = -1;
		_putchar(45);
	}
	else
		_putchar(48);

	return (r);
}
