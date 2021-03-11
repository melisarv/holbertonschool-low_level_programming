#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number de argument
 * @argv: array of argument
 * Return: result
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	if (result == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result);
	return (0);
}
