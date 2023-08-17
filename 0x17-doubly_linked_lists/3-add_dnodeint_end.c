#include "lists.h"

/**
 *add_dnodeint_end - a function that adds a new node 
 *                     at the end of a dlistint_t list.
 *
 *@head: head of list
 *@n: element to be added
 *
 *Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof (dlistint_t));
	dlistint_t *cur = *head;
	dlistint_t *prev;

	if (!node)
		return (NULL);
	while (cur)
	{
		prev = cur;
		cur = cur->next;
	}
	node->n = n;
	prev->next = node;
	node->prev = prev;
	node->next = NULL;
	return (node);
}
