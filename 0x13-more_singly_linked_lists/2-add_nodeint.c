#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list
 * @head: A pointer to the address of the
 * head of the listint_t lis
 * @n: The integer
 * Return: NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
