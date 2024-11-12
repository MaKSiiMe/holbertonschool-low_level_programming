#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: size of array
 * @c: number
 * Return: arra
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)
		return ('\0');
	for (; i < size; i++)
		array[i] = c;
	return (array);
}
