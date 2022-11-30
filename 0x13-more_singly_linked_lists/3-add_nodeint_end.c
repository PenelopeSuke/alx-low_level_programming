#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 * end of a listint_t list
 * @head: head
 * @n: The integer
 * Return:NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1, *node2;
	
	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (*head == NULL)
		*head = node1;
	else
	{
		node2 = *head;
		while (node2->next != NULL)
			node2 = node2->next;
		node2->next = node1;
	}
	return (*head);
}
