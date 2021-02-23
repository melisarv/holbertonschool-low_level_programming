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
			for (j = 0; needle[j] != '\0' ; j++)
			{
				if (haystack[i] != needle[j])
					break;
			}
			val = i;
			break;
		}
	}
	if (val == 0)
		return (haystack = 0);
	else
		return (haystack + i);
}
