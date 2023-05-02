#include "lists.h"

/**
 *delete_nodeint_at_index - delete
 *@head: head
 *@index: index
 *Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *temp;
	unsigned int cnt = 0;

	if (!*head)
		return (-1);

	while (ptr)
	{
		if (cnt == index)
		{
			if (cnt == 0)
			{
				*head = (*head)->next;
				free(ptr);
				return (1);
			}
			else
			{
				temp->next = ptr->next;
				free(ptr);
				return (1);
			}
		}
		cnt++;
		temp = ptr;
		ptr = ptr->next;
	}
	return (-1);
}
