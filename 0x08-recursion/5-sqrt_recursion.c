#include "holberton.h"

/**
 * _sqrt - function that returns the natural square root of a number
 * @n: int number to be calculated
 * @med: integer number midlle of n
 * @cont: integer number cont
 * Return: integer number - square root
 */

int _sqrt(int n, int med, int cont)
{
	if (cont == med)
		return (-1);
	if (cont * cont == n)
		return (cont);

	return (_sqrt(n, med, cont + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer number to be calculated
 * Return: integer number - square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (_sqrt(n, n / 2, 1));
}
