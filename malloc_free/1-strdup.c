#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * @str: string
 * Return: array
 */

char *_strdup(char *str)
{
/*
	int size = 0;
	int i = 0;
	char *array = malloc((size + 1) * sizeof(char));

	if (str == NULL || array == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	for (; i < size; i++)
		array[i] = str[i];
	return (array);
*/
	int i = 0;
	char *array = malloc((i + 1) * sizeof(char));

	if (str == NULL || array == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	for (; i >= 0; i--)
		array[i] = str[i];
	return (array);
}
