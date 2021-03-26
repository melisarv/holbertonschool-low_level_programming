#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		i++;
	}

	i = i - 1;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			count = count + (1 << j);

		j++;
		i--;
	}
	return (count);
}
