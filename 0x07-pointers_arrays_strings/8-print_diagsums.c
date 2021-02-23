#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that print the sum of the two diagonals
 * @a: the pointer of a matrix of integer
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, s, sum1 = 0, sum2 = 0;
	s = size -1;

	while (i < size * size)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[s];

		i = i + (size + 1);
		s = s + (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
