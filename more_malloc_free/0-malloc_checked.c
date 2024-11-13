#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Entry point
 * @b: size of malloc
 * Return: i
 */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
