#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: integer number count of the arguments
 * @av: pointer to the string which are those arguments
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, x, cont = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			cont++;
			j++;
		}
		i++;
	}

	str = malloc(sizeof(char) * (cont + ac + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	x = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			str[x] = av[i][j];
			x++;
		}
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';
	return (str);
}
