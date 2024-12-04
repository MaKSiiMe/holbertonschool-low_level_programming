#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Entry point
 * @head: pointer to the first node
 * @str: string
 * * Return: the address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		return (new_node);
	}

	*head = new_node;
	return (*head);
}
