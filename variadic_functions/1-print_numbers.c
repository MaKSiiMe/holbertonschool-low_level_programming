#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: size of argv
 * @n: array of size argc
 * @...: parameters to print
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (; i < n; i++)
		printf("%d, ", va_arg(args, int));
	printf("\n");

	va_end(args);
}
