#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - numbers with two digits
 *
 * Return:0
 *
 */

int main(void)
{
	int n = 48;
	int n2;

	while (n < 58)
	{
		n2 = 48;
		while (n2 < 58)
		{
			putchar(n);
			putchar(n2);

			if (!(n == 57 && n2 == 57))
			{
				putchar(',');
				putchar(' ');
			}

			n2++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
