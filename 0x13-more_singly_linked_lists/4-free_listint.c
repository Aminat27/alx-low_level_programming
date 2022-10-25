#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now);
	}
}
