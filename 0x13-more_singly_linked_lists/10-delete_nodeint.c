#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer
 * @index: The index of the node to be deleted
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1, *node2 = *head;
	unsigned int node3;

	if (node2 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node2);
		return (1);
	}
	for (node3 = 0; node3 < (index - 1); node3++)
	{
		if (node2->next == NULL)
			return (-1);
		node2 = node2->next;
	}
	node1 = node2->next;
	node2->next = node1->next;
	free(node1);
	return (1);
}
