#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: number of parameters
 * @...: parameters to sum
 * Return: result or 0
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
