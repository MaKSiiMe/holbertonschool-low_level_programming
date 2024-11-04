#include "main.h"

/**
 * *_memset - Entry point
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
