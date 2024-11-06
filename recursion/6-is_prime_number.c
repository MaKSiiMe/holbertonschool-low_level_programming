#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: number
 * Return: 1 or 0 or -1
 */

int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}

/**
 * _prime_number - Entry point
 * @n: number
 * @i: number
 * Return: 1 or 0 or -1
 */

int _prime_number(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_prime_number(n, i + 1));
}
