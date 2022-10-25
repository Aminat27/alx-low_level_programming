#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @n: integer to store in the list.
 * Return: address of the head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp;

	(void)temp;

	lastNode = malloc(sizeof(listint_t));

	if (lastNode == NULL)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = lastNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = lastNode;
	}

	return (*head);
}
