#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(i + (i < 10 ? '0' : 'a' - 10));
	}
	putchar('\n');
	return (0);
}
