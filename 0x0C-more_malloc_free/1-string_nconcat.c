#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _len - get the size of a string
 * @s: pointer of the string
 * Return: integer number size
 */
int _len(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
		cont++;

	return (cont);
}

/**
 * string_nconcat - concatenates two string
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 * @n: number of bytes to concatenate of s2
 * Return: pointer to newly allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, ns1;
	unsigned int j, ns2;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return ("");

	ns1 = _len(s1);
	ns2 = _len(s2);

	if (n >= ns2)
		n = ns2;

	str = malloc(sizeof(char) * (ns1 + n + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ns1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
