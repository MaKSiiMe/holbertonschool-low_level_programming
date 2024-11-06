#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to print
 * Return : 1 or 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
