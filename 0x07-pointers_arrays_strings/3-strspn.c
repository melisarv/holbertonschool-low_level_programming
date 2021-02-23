#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the pointer string
 * @accept : the string to be searched
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, num = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				num++;
				break;
			}
		}
	}

	if (num > 0)
		return (num + 1);
	else
		return (num);
}
