#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Entry point
 * @array: array
 * @size: size of array
 * @action: function
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
		for (; i < size; i++)
			action(array[i]);
}
