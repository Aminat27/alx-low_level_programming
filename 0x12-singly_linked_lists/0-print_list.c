#include "lists.h"
/**
 * size_t print_list - check the code
 * @h - pointer to the list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(null)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;

	}
	return (count);
}
