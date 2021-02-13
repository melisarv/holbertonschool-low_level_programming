#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return:0
 *
 */

int main(void)
{
	int n1 = 65;
	int n2 = 97;

	while (n2 < 123)
	{
		putchar(n2);
		n2++;
	}
	while (n1 < 91)
	{
		putchar(n1);
		n1++;
	}
	putchar('\n');

	return (0);

}
