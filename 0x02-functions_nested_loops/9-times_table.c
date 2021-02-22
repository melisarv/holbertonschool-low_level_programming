#include "holberton.h"

/**
 * times_table - function prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int temp, temp1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			temp = i * j;
			temp1 = temp;

			if (i == 0 && j == 0)
				_putchar('0');
			else
			{
				if (temp < 10)
					_putchar('0' + temp);
				else
				{
					temp = temp / 10;
					_putchar('0' + temp);
					temp1 = temp1 % 10;
					_putchar('0' + temp1);
				}
			}

			if (j != 9)
			{
				temp = i * (j + 1);
				_putchar(',');
				_putchar(' ');

				if (temp < 10)
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
