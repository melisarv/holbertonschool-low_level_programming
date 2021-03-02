#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars
 * @size: the size of the memory to create
 * @c: the char that initializes
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);

	if (size == 0 || s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
