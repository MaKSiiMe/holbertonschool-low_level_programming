#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 10)
				_putchar ((n / 10) + '0');
			_putchar((n%10) + '0');
		}
		_putchar ('\n');
	}
}
