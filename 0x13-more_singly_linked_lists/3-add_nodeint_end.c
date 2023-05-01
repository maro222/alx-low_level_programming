#include "lists.h"

/**
 *add_nodeint_end - add node
 *@head: head
 *@n: data
 *
 *Return: address of node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr;

	node = malloc(sizeof(listint_t));
	ptr = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	ptr->next = *head;

	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;

	return (node);
}
