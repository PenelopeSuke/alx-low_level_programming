#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * a listint_t linked list
 * @head: A pointer
 * @index: The index of the node to locate
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
