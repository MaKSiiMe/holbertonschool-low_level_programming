#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - Entry point
 * @h: pointer to the first node
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
