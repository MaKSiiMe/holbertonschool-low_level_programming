#include "main.h"

/**
 * *_memcpy - Entry point
 * @dest: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @src: constant byte
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
