#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (*head == NULL)
		return (0);
	tmp = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (a);
}
