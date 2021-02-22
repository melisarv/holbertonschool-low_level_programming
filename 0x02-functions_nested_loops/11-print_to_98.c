#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function that print all natural number
 * @n: integer as far to be printed
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
			printf("%d\n", 98);
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
			printf("%d\n", 98);
	}
}

