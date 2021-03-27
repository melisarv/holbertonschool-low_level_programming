#include "holberton.h"

/**
 * clear_bit - sets bit to 0 at given index
 * @n: number
 * @index: index
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n = (*n) & ~(1 << index);
	return (1);
}
