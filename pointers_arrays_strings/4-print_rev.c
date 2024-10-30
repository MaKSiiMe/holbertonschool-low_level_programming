#include "main.h"
#include <string.h>

/**
 * _puts - Entry point
 * @str : char of string
 * Return: Always 1 or 0
 */

void print_rev(char *s)

{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}

	for (; l != 0; l--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
