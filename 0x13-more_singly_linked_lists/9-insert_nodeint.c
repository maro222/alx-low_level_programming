#include "lists.h"

/**
 *insert_nodeint_at_index - insertion
 *@head:head
 *@idx: index
 *@n: data
 *Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *temp;
	unsigned int cnt = 0;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	while (ptr)
	{
		if (cnt == idx)
		{
			node->next = ptr;
			if (cnt == 0)
				*head = node;
			else
				temp->next = node;
			return (node);
		}
		cnt++;
		temp = ptr;
		ptr = ptr->next;
	}

	if (cnt == idx)
	{
		node->next = ptr;
		if (cnt == 0)
			ptr = node;
		else
			temp->next = node;
		return (node);
	}
	return (NULL);
}
