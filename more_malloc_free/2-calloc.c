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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = calloc(nmemb, size);

	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
