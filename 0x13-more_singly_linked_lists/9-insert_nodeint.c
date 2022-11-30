#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the list
 * @idx: position to add the node
 * @n: data for the new node
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1, *node2 = *head;
	unsigned int node3;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);
	node1->n = n;

	if (idx == 0)
	{
		node1->next = node2;
		*head = node1;
		return (node1);
	}
	for (node3 = 0; node3 < (idx - 1); node3++)
	{
		if (node2 == NULL || node2->next == NULL)
			return (NULL);
		node2 = node2->next;
	}
	node1->next = node2->next;
	node2 ->next = node1;

	return (node1);
}
