#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return:NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *new_node;
	int c;

	node = *head;
	while (node && node->next != NULL)
		node = node->next;
	for (c = 0; str[c] != '\0'; c++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (node)
		node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
