#include "lists.h"


/**
 * print_list - printin linked list
 *
 * @h: head of list
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			print("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
