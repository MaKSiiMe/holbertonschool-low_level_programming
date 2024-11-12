#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * @width: largeur
 * @height: longueur
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int l = 0;
	int c = 0;
	int **array = malloc(height * sizeof(*array));

	if (array == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (; l < height; l++)
	{
		array[l] = malloc(width * sizeof(int));

		if (array[l] == NULL)
		{
			for (; c <= l; c++)
				free(array[c]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
