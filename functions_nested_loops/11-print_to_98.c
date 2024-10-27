#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: character to check
 * Return:
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
			printf("%d, ", n--);
		printf("%d, ", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d, ", n);
	}
}
