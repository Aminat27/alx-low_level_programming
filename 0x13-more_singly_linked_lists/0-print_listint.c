#include "lists.h"
#include <stdio.h>
/**
 * print_listint - check the code
 * @h: pointer to the list
 * Return: number of element in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t printNode;

	printNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		printNode++;
	}
	return (printNode);


}
