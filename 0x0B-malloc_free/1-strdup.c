#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return: the pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, cont = 0;

	while (str[cont] != '\0')
	{
		cont++;
	}

	dup = malloc(sizeof(*dup) * cont);

	if (str == NULL || dup == NULL)
		return (NULL);

	while (i < cont)
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';
	return (dup);
}
