#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: point to be encode
 * Return: point result
 */
char *rot13(char *s)
{
	int i = 0, j, len;
	char in[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = 52;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
