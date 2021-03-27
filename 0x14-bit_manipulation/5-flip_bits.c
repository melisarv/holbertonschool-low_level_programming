#include "holberton.h"

/**
 * flip_bits - number of bits to flip
 * @n: number
 * @m: number
 * Return: interger
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
			count++;
	}
	return (count);
}

/**
 * get_bit - get value of bit
 * @n: num
 * @index: index
 * Return: number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index; c++)
		n >>= 0x1;
	return (n & 0x1);
}
