#include "holberton.h"

/**
 * rev_string - entry point
 * Description: function that reverse a string
 * @s: point to be printed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, n = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (n < len)
	{
		len--;
		temp = s[n];
		s[n] = s[len];
		s[len] = temp;
		n++;
	}
}
