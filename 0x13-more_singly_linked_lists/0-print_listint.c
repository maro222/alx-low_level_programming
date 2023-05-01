#include "lists.h"


/**
 *print_listint - print the list
 *@h: header of list
 *
 *Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint **ptr = h;
	int cnt = 0;

	while (*ptr)
	{
		printf("%d\n", *ptr->n);
		*ptr = *ptr->next;
		cnt++;
	}
	return (cnt);
}
