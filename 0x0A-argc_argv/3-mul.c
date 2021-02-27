#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */
int main(int argc, char *argv[])
{
	int i, r = 1, error = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			r = r * atoi(argv[i]);

		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		error = 1;
	}
	return (error);
}
