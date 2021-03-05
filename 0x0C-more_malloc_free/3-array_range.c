#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly array
 */
int *array_range(int min, int max)
{
	int i, cont = 0;
	int *a;

	if (min > max)
		return (NULL);

	while (max > min)
	{	cont++;
		max--;
	}

	a = malloc(sizeof(int) * (cont + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= cont; i++)
	{
		a[i] = min + i;
	}

	return (a);
}
