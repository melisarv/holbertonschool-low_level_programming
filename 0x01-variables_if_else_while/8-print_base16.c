#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the number of base16 in lowercase
 *
 * Return:0
 *
 */

int main(void)
{
	int n1 = 48;
	int n2 = 97;
	int res1, res2;

	while (n1 < 58)
	{
		res1 = n1 % 16;
		if (res1 <= 10)	
		putchar(n1);
		
		n1++;
	}
	while (n2 < 103)
	{
		res2 = n2 % 16;
		if (res2 <= 10)
		putchar(n2);

		n2++;
	}

	putchar('\n');
	return (0);
}
