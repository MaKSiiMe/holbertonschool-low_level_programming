#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of size argc
 * Return: argv
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
		for (; i < n; i++)
			result += va_arg(args, int);
	va_end(args);

	return (result);
}
