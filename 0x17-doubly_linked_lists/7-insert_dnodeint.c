#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a node at a given position.
 *
 *@h: head of the list
 *@idx: index of the list
 *@n: element
 *
 *Return: address of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx--)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}

	if (!ptr)
		return (add_dnodeint_end(h, n));

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
		return (node);

	node->n = n;
	node->next = ptr;
	node->prev = ptr->prev;
	ptr->prev->next = node;
	ptr->prev = node;
	return (node);
}
