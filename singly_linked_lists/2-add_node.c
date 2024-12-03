#include "lists.h"

/**
 * add_node - Entry point
 * @head: pointer to the first node
 * @str:
 * Return: the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return(NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return(*head);
}
