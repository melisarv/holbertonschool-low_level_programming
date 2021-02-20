#include "holberton.h"

/**
 * _islower - function that checks for lowercase character
 *@c: integer to be changed
 * Return: integer result
 */

int _islower(int c)
{
	int r = 0;

	if (c >= 97 && c <= 122)
		r = 1;

	return (r);
}
