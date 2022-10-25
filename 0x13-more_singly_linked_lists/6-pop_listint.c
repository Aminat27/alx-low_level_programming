#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old, *new;

	if (*head == NULL)
		return (0);

	old = *head;
	n = old->n;
	new = old->next;

	free(old);
	*head = new;
	return (n);
}
