#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _len - calculates the size of a string
 * @str: the string to be calculated
 * Return: the size of the string
 */
int _len(char *str)
{
	int cont = 0;

	while (str[cont])
		cont++;

	return (cont);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer of the string result
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, cont1 = 0, cont2 = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	cont1 = _len(s1);
	cont2 = _len(s2);

	str = malloc(sizeof(char) * (cont1 + cont2 + 1));

	if (str == NULL)
		return (NULL);

	while (i < cont1)
	{
		str[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < cont2)
	{
		str[i + cont1] = s2[i];
		i++;
	}
	
	str[cont1 + cont2] = '\0';

	return (str);
}
