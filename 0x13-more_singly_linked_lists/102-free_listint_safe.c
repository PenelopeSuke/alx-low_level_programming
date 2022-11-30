#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer
 * Return: 0
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}
			node1 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
			}
			return (nodes);
		}
		node1 = node1->next;
		node2 = (node2->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 * can free lists containing loops)
 * @h: A pointer
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node1;
	size_t node2, index;

	node2 = looped_listint_count(*h);

	if (node2 == 0)
	{
		for (; h != NULL && *h != NULL; node2++)
		{
			node1 = (*h)->next;
			free(*h);
			*h = node1;
		}
	}
	else
	{
		for (index = 0; index < node2; index++)
		{
			node1 = (*h)->next;
			free(*h);
			*h = node1;
		}
		*h = NULL;
	}
	h = NULL;
	return (node2);
}
