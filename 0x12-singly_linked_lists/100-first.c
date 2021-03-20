#include <stdio.h>
#include <stdlib.h>

/**
 * premain - function that prints before the main
 * Return: void
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
