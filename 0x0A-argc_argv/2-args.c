#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: integer number count of the arguments
 * @argv: pointer to the string which are those arguments
 * Return: integer result
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

