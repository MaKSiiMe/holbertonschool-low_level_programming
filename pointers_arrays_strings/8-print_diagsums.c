#include "main.h"
#include "stdio.h"

/**
 * *print_diagsums - Entry point
 * @a: array
 * @size: size of array
 * Return: result
 */

void print_diagsums(int *a, int size)
{
	int val;
	int result1 = 0;
	int result2 = 0;

	for (val = 0; val < size * size; val = val + size + 1)
		result1 += a[val];

	for (val = size - 1; val < size * size - 1; val = val + size - 1)
		result2 += a[val];

	printf("%d, %d\n", result1, result2);
}
