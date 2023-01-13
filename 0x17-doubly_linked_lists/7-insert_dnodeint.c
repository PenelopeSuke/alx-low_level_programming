#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node1 = *h, *node2;
	unsigned int index, cont = 0;

	node2 = malloc(sizeof(dlistint_t));
	if (node2 == NULL)
		return (NULL);
	node2->n = n;

	if (idx == 0)
	{
		node2->prev = NULL;
		node2->next = *h;
		if (*h)
			(*h)->prev = node2;
		*h = node2;
		return (*h);
	}
	index = idx - 1;
	while (node1 && cont != index)
	{
		cont++;
		node1 = node1->next;
	}
	if (cont == index && node1)
	{
		node2->prev = node1;
		node2->next = node1->next;
		if (node1->next)
			node1->next->prev = node2;
		node1->next = node2;
		return (node2);
	}
	free(node2);
	return (NULL);
}
