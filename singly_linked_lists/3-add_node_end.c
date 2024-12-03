#include "lists.h"

/**
 * main - Entry point
 * @h: pointer to the first node
 * Return: the number of node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return(NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	
	if (*head)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		return(new_node);
	}

	*head = new_node;
	return (*head);
}
