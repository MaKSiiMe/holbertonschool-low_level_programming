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
	char *truc;

	truc = va_arg(args, char*);

	for (; i < n; i++)
	{
		truc = va_arg(args, char*);
		if (truc == NULL)
			printf("(nil)");
		else
			printf("%s", truc);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
