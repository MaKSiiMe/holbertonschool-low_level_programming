#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Entry point
 * @s1: string
 * @s2: string
 * @n: number
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;
	char *result = NULL;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size_s1] != '\0')
		size_s1++;
	while (s2[size_s2] != '\0')
		size_s2++;

	result = malloc((size_s1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
