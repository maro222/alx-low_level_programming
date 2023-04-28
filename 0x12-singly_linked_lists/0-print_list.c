#include "lists.h"


/**
 * print_list - printin linked list
 *
 * @h: head of list
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			print("[0] (nil)\n");
		h = h->next;
		cnt++;
	}

	return (cnt);
}
