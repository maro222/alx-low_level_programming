#include "lists.h"

/**
 *get_nodeint_at_index - get specific node
 *@head: head
 *@index: index
 *
 *Return: return node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int cnt = 0;

	if (!head)
		return (NULL);

	while (ptr)
	{
		if (cnt == index)
			break;
		ptr = ptr->next;
		cnt++;
	}
	if (cnt < index)
		return (NULL);
	return (ptr);
}
