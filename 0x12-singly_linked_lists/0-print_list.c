#include "list.h"

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
	struct list_s *ptr = h;

	while (ptr !=  NULL)
	{
		printf("[%d] %s\n", strlen(ptr->str), ptr->str ? ptr->str : "(nil)");
		ptr = ptr->next;
		cnt++;
	}
	return (cnt);
}
