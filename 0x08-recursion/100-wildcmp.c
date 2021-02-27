#include "holberton.h"

/**
 * wildcmp - function that compares two strings are identical
 * @s1: pointer of the first string to be compared
 * @s2: pointer of the second string to be compared
 * Return: integer number result
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)) && *s1 != '\0')
		return (1);

return (0);
}
