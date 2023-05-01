#include "lists.h"

/**
 *free_listint - free list
 *@head: head
 *
 * Return: nothin.
 */

void free_listint(listint_t *head)
{
	listint_t* ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	ptr = NULL;
}
