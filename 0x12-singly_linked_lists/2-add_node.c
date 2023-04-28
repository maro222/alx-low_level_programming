#include "lists.h"

/**
 * add_node - add
 * @head: head
 * @str: string
 *
 * Return: nothing
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	*head = node;

	return (node);
}
