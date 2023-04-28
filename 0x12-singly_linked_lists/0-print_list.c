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

	while (str++)
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
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		cnt++;
	}
	return (cnt);
}
