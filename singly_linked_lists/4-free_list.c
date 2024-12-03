#include "lists.h"

/**
 * free_list - Entry point
 * @head: 
 * Return: the number of node
 */

void free_list(list_t *head)
{
	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
