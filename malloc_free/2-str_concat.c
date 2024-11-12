#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *result = malloc((size1 + size2 + 1) * sizeof(char));
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (result == NULL)
		return (NULL);
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	for (; i <= (size1 + size2); i++)
	{
		if (i < size1)
			result[i] = s1[i];
		else
			 result[i] = s2[i - (size1)];
	}
	return (result);
}
