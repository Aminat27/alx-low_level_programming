#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 * The function sets the head to NULL
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *now, *temp;

	if (head != NULL)
	{
		now = *head;
		if ((temp = now) != NULL)
		{
			temp = temp->next;
			free(temp);
		}
		*head = NULL;
	}

}

