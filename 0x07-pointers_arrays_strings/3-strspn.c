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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
			}
		}

		if ( i == numm)
			break;
	}

	return (num);
}
