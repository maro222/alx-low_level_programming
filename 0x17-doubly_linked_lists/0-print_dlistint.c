#include "lists.h"

/**
 *print_dlistint - a function that prints all the elements of a dlistint_t list
 *
 *@h: head of the list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t cnt = 0;

	while (cur)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		cnt++;
	}
	return (cnt);
}
