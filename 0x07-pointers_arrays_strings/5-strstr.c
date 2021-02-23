#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the pointer of the string where it will be analyzed
 * @needle: substring that will be searched
 * Return: pointer to the beginning the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, val = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] && val == 0)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0')
				val = i;
		}
	}

	if (needle[i] == '\0')
		return (haystack);
	else if (val == 0)
		return ('\0');
	else
		return (haystack + val);
}
