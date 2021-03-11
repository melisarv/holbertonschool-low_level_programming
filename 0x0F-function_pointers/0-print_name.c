#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name of the person
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}	
