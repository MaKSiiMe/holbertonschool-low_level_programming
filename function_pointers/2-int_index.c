#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Entry point
 * @array: array
 * @size: size of array
 * @cmp: function
 * Return: array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == 0 || size == 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
