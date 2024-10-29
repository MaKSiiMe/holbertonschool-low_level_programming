#include "main.h"
#include <string.h>

/**
 * _strlen - Entry point
 * @s: varaible to check
 * return: l
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
