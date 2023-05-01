#include "lists.h"

/**
 *free_listint2 - free list
 *@head: head
 *
 * Return: nothin.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	ptr = NULL;
	*head = NULL;
}
