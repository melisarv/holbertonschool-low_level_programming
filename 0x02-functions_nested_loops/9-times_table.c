#include "holberton.h"

/**
 * times_table - function prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, temp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			temp = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (temp >= 10)
			{
				_putchar('0' + (temp / 10));
				_putchar('0' + (temp % 10));
			}
			else if (temp < 10 && j != 0)
			{
				_putchar(' ');
				_putchar('0' + (temp % 10));
			}
			else
				_putchar('0' + (temp % 10));
		}
		_putchar('\n');
	}
}
