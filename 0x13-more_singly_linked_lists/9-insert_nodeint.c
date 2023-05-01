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
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		cnt++;
		ptr = ptr->next;
	}
	if (cnt == idx - 1)
	{
		node->next = ptr->next;
		ptr->next = node;
		return (node);
	}
	return (NULL);
}
