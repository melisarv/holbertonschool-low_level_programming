#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	int cont = 0, div, num;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}

	num = n;
	while (num != 0)
	{
		num = num / 10;
		cont++;
	}

	num = 1;
	div = 1;
	while (num < cont)
	{
		div = div * 10;
		num++;
	}

	num = 1;
	while (num <= cont)
	{
		_putchar((n / div) % 10 + '0');
		div = div / 10;
		num++;
	}
	}
}
