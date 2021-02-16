#include "holberton.h"

/**
 * swap_int - entry point
 *
 * Description: function that swaps the values of two integers
 *
 * @a: point to be swaps
 * @b: point to be swaps
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

