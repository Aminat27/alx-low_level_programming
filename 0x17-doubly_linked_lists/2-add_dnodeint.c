#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->prev != NULL)
		{
			i = i->next;
		}
	}
	new->next = i;

	if (i != NULL)
		i->prev = new;

	return (new);
}
