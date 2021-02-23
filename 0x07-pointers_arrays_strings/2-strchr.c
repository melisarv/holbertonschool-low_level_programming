#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the pointer string
 * @c: character to be searched
 * Return: pointer result
 */
char *_strchr(char *s, char c)
{
	int i = 0, v = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{	v = 1;
			break;
		}
		i++;
	}

	if (v == 1)
		return (s + i);
	else
		return ('\0');
}
