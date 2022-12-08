#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now;


	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now);
	}
}
