#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: integer to be changed
 * Return: integer result
 */
int _isalpha(int c)
{
	int r = 0;

	if ((c >= 97 && c <= 122) || (c >= 64 && c <= 90))
		r = 1;

	return (r);
}
