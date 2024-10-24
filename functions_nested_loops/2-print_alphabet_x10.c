#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char l;
	int m;

	for (m = 0; m < 10; m++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar (l);
		}
		_putchar ('\n');
	}
}
