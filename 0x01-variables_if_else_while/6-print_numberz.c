#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints single digit numbers of base diez with putchar
 *
 * Return:0
 *
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n / 10 >= 0)
			putchar(n);

		n++;
	}
	putchar('\n');
	return (0);
}
