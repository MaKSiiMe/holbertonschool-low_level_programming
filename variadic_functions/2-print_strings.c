#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: size of argv
 * @n: array of size argc
 * @...: parameters to print
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		if (separator == NULL || i == 0)
			printf("%s", va_arg(args, char*));
		else
			printf("%s%s", separator, va_arg(args, char*));
	}
	printf("\n"); 

	va_end(args);
}
