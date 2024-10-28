#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number to check
 */

void print_diagonal(int n)
{
	int l, m;
	
	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
				_putchar(' ');
			_putchar('\\');
			if (l == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
