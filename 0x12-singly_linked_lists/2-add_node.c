#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list
 * @str: The integer for the new node to contain
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int a;
	char *dup_str;

	for (a = 0; dup_str[a] != 0; a++)
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
