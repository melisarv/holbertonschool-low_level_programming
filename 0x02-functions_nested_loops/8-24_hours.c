#include "holberton.h"

/**
 * jack_bauer - function that prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0, min, temp;

	while (h < 24)
	{
		min = 0;

		while (min < 60)
		{
			if (h <= 9)
			{
				_putchar('0');
				_putchar('0' + h);
			}
			else if (h >= 10)
			{
				temp = h / 10;
				_putchar('0' + temp);
				temp = h % 10;
				_putchar('0' + temp);
			}
			_putchar(':');

		if (min <= 9)
		{
			_putchar('0');
			_putchar('0' + min);
		}
		else if (min >= 10)
		{
			temp = min / 10;
			_putchar('0' + temp);
			temp = min % 10;
			_putchar('0' + temp);
		}
		min++;
		_putchar('\n');
		}
	h++;
	}
}
