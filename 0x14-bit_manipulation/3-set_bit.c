#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: number
 * @index: index
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n = (*n) | 1 << index;
	return (1);
}
