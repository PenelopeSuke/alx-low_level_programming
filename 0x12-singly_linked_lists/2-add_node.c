#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = a;
	node->next = *head;

	*head = node;
	return (*head);
}
