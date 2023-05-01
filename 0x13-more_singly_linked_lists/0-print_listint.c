#include "lists.h"


/**
 *print_listint - print the list
 *@h: header of list
 *
 *Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
