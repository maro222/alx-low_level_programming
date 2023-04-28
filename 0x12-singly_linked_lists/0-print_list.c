#include "lists.h"

/**
 *strlen - size of string
 *
 * @str: string
 * Return: size int
 */

int strlen(char *str)
{
	int cnt = 0;

	while (str[cnt])
		cnt++;
	return (cnt);
}

/**
 * print_list - printin linked list
 *
 *@h: head of list
 *Return: # of nodes
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			print("[0] (nil)\n");
		h = h->next;
		cnt++;
	}
	return (cnt);
}
