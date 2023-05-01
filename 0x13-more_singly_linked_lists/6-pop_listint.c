#include "lists.h"

/**
 *pop_listint - pop 1st elemnt
 *@head: head
 *
 *Return: popped data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!*head)
		return (0);

	ptr = *head;
	*head = (*head)->next;
	n = ptr->n;
	free(ptr);

	return (n);
}

