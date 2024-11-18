#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Entry point
 * @name: name
 * @f: function pointers
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
