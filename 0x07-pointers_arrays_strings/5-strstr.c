#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the pointer of the string where it will be analyzed
 * @needle: substring that will be searched
 * Return: pointer to the beginning the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *val;

	if (needle[i] == '\0')
		val = haystack;
	while (haystack[i] && needle[j])
	{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0')
				val = haystack + i;
			else
				val = '\0';
			i++;
	}
		return (val);
}
