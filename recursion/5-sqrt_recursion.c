#include "main.h"

/**
 * _sqrt - Entry point
 * @n: number
 * @i: number
 * Return: 1 or 0 or -1
 */

int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - Entry point
 * @n: number
 * Return: 1 or 0 or -1
 */

int _sqrt_recursion(int n)
{
	n = _sqrt(n, 1);
	return (n);
}
