#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: character to check
 * Return: n
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = m * -1;
	_putchar (m + '0');
	return (m);
}
