#include "lists.h"

/**
 *get_dnodeint_at_index - a function that returns the nth node
 *                        of a dlistint_t linked list.
 *
 *@head: head of the list
 *@index: index of the node
 *
 *Return: address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (index--)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}
	return (node);
}
