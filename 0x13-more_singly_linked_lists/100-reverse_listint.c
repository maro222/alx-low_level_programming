#include "lists.h"

/**
 *reverse_listint - reverse list
 *
 *@head: head
 *
 *Return: return head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head, *next = NULL;

	if (!(*head))
		return (NULL);

	*head = NULL;
	while (cur)
	{
		next = cur->next;
		cur->next = *head;
		(*head)->next = cur;
		cur = next;
	}
	return (*head);
}
