#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
