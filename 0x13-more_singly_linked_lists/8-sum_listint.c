#include "lists.h"


/**
 *sum_listint - sum
 *
 *@head: head
 *
 *Return: sum of nodes
 */


int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (sum);
	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
