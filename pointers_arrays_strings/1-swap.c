#include "main.h"

/**
 * swap_int - Entry point
 * @a: varaible to swap
 * @b: varible to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
