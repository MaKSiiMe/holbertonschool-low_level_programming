#include "main.h"

/**
 * print_square - Entry point
 * @size: number to check
 */

void print_square(int size)
{
	int c, l;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar ('#');
			}
			_putchar (' ');
			_putchar ('\n');
		}
	}
}
