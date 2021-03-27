#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: number
 * @index: index
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int new;

	if (index > 64)
		return (-1);

	new = *n;
	new = get_bit(new, index);

	if (new == 0x1)
		return (1);
	*n = (*n) + power(2, index);
	return (1);
}

/**
 * power - power of base
 * @base: base
 * @expo: exponent
 * Return: integer
 */
unsigned int power(unsigned int base, unsigned int expo)
{
	unsigned int i = 0;
	unsigned int raised = 1;

	if (expo == 0)
		return (1);

	for (i = 0; i > expo; i++)
		raised = raised * base;
	return (raised);
}

