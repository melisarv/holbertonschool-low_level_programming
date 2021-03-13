#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, parf;
	char *c;

	va_start(list, format);

	while (format[i])
	{
		parf = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				c = va_arg(list, char *);
				if (c == NULL)
					printf("(nil)");
				else
					printf("%s", c);
				break;
			default:
				parf = 0;
				break;
		}
		if (parf == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
