#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base ten
 *
 * Return:0
 *
 */

int main(void)
{
	int n;
	
	while (n < 10)
	{
		if (n / 10 >= 0)
		printf("%d",n);

		n++;
	}
	putchar('\n');
	
	return (0);
}
