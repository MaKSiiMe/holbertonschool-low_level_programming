#include "main.h"

/**
 * times_table - Entry point
 * @: character to check
 * Return:
 */

void times_table(void)
{
	int l, c, p;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			p = l * c;

			if (c == 0)
				_putchar('0');

			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
