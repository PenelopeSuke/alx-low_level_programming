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
	char *dup;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
}
