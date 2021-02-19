#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: point entry to be encodes
 * Return: point result
 */
char *leet(char *s)
{
	int len, i = 0, j;
	char letters[10] = "aAeEoOtTlL";
	char numbers[10] = "4433007711";

	len = 10;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
