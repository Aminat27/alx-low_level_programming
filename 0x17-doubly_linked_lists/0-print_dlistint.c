#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - check the code
 * @h: pointer to the list
 * Return: number of element in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
