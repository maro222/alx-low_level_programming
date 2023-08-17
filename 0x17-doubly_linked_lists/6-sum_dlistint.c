#include "lists.h"

/**
 *sum_dlistint - a function that returns the sum
 *                 of all the data (n) of a dlistint_t linked list.
 *
 *@head: head of the list
 *Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
	}
	return (sum);
}
