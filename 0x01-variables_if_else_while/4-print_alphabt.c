#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return:0
 *
 */

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
			putchar(n);

		n++;
	}

	putchar('\n');

	return (0);
}
