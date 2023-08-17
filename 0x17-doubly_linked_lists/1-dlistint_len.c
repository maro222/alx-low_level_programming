#include "lists.h"

/**
 *dlistint_len - a function that returns the number of elements
 *                         in a linked dlistint_t list.
 *
 *@h: head of list
 *
 *Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	int size = 0;

	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return (size);
}
