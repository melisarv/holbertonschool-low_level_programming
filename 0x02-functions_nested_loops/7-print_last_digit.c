#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: integer to be calculated
 * Return: integer result
 */
int print_last_digit(int i)
{
	int r = 48;

	if (i < 0)
	i = i * -1;

	r = r + i % 10;

	_putchar(r);

	return (r - 48);

}
