#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Entry point
 * @head: tête
 * Return: the number of node
 */

void free_list(list_t *head)
{
	list_t *next_node;

	if (!head)
		return;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
