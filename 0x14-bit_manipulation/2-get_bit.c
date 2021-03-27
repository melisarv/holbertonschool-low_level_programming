#include "holberton.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: number
 * @index: index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 0x1;

	return (n & 0x1);
}
