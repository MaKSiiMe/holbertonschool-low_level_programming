#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Entry point
 * @nmemb: string
 * @size: string
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = calloc(nmemb, size);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
