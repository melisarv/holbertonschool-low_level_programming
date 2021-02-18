#include "holberton.h"
#include <stdio.h>

/**
 * print_array - entry point
 * Description: fuction that prints elements of an array
 * @a: point array to be printed
 * @n: number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i + 1 == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
		printf("\n");
}
