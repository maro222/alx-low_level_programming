#include "lists.h"

/**
 * add_node_end - add
 * @head: head
 * @str: string
 *
 * Return: nothing
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (*head);
}
