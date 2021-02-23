#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the pointer of the string
 * @accept: string to be searched
 * Return: the pointer result
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && (i < num || num == 0))
				num = i;
		}
	}
	if (num > 0)
		return (s + num);
	else
		return (0);
}
