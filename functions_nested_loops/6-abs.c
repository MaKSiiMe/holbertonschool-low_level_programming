#include "main.h"

/**
 * _abs - Entry point
 * @n: character to check
 * Return: 'n'
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
