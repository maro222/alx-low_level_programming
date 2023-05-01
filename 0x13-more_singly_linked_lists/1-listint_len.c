#include "lists.h"


/**
 *listint_len - print the list
 *@h: header of list
 *
 *Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
