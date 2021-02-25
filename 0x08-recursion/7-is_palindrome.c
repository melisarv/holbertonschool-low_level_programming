#include "holberton.h"

/**
 * _strlen - function that calculates the size of the string
 * @s: the pointer of the string
 * Return: size of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * palindrome - function that validates if a string is palindrome
 * @s: the pointer of the string
 * @i: integer number starting counter
 * @f: integer number end counter
 * Return: integer number 1 if a palindrome and 0 if not
 */

int palindrome(char *s, int i, int f)
{

	if (s[i] != s[f])
		return (0);

	if (i >= f)
		return (1);

	return (palindrome(s, i + 1, f - 1));
}

/**
 * is_palindrome - function that validates if a string is palindrome
 * @s: the pointer of the string
 * Return: integer number 1 if a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);

	return (palindrome(s, 0, _strlen(s) - 1));
}
