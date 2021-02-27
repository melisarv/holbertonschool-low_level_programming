#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimun number of coins
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */

int main(int argc, char *argv[])
{
	int i, cents = 0, money = 0, error = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc > 1)
	{
		money = atoi(argv[1]);

		if (money < 0)
		{
			printf("0\n");
			return (1);
		}

		while (money > 0)
		{
			for (i = 0; i < 5; i++)
			{
				if (money >= coins[i])
				{
					cents = cents + (money / coins[i]);
					money = money % coins[i];
				}
			}
			printf("%d\n", cents);
		}
	}
	else
	{
		printf("Error\n");
		error = 1;
	}
	return (error);
}
