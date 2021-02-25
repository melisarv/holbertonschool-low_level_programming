#include "holberton.h"

/**
 * is_prime_n - function that validates if a number is prime
 * @n: integer number to be validated
 * @cont: integer cont
 * Return: integer number 1 if is prime, otherwise 0
 */

int is_prime_n(int n, int cont)
{
	if (n / 2 < cont)
		return (1);
	if (n % cont == 0)
		return (0);

	return (is_prime_n(n, cont + 1));
}

/**
 * is_prime_number - function that validates if a number is prime
 * @n: integer number to be validated
 * Return: integer number 1 if is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_n(n, 2));
}
