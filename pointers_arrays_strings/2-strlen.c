#include "main.h"
#include <string.h>

/**
 * _strlen - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
