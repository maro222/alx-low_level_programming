#include "lists.h"

/**
 *free_dlistint - a function that frees a dlistint_t list.
 *
 *@head: head of the list
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
	}
}
