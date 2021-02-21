#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: integer to be calculated
 * Return: integer absolute
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;

	return (i);
}
