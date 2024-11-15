#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Entry point
 * @min: string
 * @max: string
 * Return: result
 */

int *array_range(int min, int max)
{
	int *arr = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
