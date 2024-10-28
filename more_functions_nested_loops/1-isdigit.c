#include "main.h"

/**
 * _isdigit - Entry point
 * @c: character to check
 * Return: 1 if c is letter 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
