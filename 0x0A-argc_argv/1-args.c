#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
