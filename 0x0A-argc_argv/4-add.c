#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that adds positive numbers
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, error = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		error = 1;
	}

	return (error);
}
