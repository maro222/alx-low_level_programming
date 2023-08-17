#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node at specific index
 *@head: head of list
 *@index: index of node
 *Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		if (ptr->next)
		{
			ptr->next->prev = NULL;
			*head = ptr->next;
		}
		free(ptr);
		return (1);
	}
	while (index--)
	{
		if (!ptr)
			return (-1);
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (-1);
	if (ptr->next)
	{
		ptr->next->prev = ptr->prev;
		ptr->prev->next = ptr->next;
	}
	free(ptr);
	ptr = NULL;
	return (1);
}
