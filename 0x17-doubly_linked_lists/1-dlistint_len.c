#include "lists.h"
/**
 * dlistint_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
