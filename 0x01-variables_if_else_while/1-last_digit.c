#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number and print the last digit
 *
 * Return:0
 *
 */

int main(void)
{
	int n, last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = (n % 10);
	printf("Last digit of %i id %i", n, last);

	if (last == 0)
		printf(" and is 0\n");
	else if (last < 6 && last != 0)
		printf(" and is less than 6 and not 0\n");
	else
		printf(" and is greater than 5\n");

	return (0);
}
