#include "lists.h"

/**
 *list_len - length of list
 *
 *@h: head of list
 *Return: cnt of nodes
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
