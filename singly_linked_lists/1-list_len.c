#include "lists.h"

/**
 * list_len - Entry point
 * @h: pointer to the first node
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
