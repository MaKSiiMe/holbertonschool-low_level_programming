#include "main.h"

/**
 * print_triangle - Entry point
 * @size: variable to check
 * @n & @m: number to check
 */

void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				if (m >= (size - (n + 1)))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
