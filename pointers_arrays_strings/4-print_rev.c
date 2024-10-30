#include "main.h"

/**
 * print_rev - Entry point
 * @s: char of string
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
