#include "lists.h"

/**
 * free_list - list
 * @head: head of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
