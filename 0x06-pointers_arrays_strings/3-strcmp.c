#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: an integer less than, equal to, or greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cont = 0;

	while (s1[i] != '\n' && s2[i] != '\n' && cont == 0)
	{
		if (s1[i] == s2[i])
			cont = 0;
		else
			cont = s1[i] - s2[i];
		i++;
	}

	return (cont);
}
