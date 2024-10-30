#include "main.h"
#include <string.h>

/**
 * _puts - Entry point
 * @str : char of string
 * Return: Always 1 (True) or 0 (False)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
