#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: tableau
 * @height: longueur
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i <= height; i++)
	{
		free(grid[(height) - i]);
	}
	free(grid);
}
