#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer entry to be compared
 * Return: pointer result
 */
char *cap_string(char *s)
{
	char tem[] = {'\t', '\n', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if ((s[i] == tem[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] = s[i + 1] - 32;
			j++;
		}
		i++;
	}
	return (s);
}
