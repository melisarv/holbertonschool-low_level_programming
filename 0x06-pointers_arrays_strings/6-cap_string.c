#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer entry to be compared
 * Return: pointer result
 */
char *cap_string(char *s)
{
	char tem[] = {'\t', '\n', 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i = 0, j, len = 13;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	for (i = i + 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if ((s[i] == tem[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
