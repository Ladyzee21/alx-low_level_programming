#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head of the list
 * @index: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
		listint_t *node, *temp = *head;
		size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

		node->n = n;
		node->next = NULL;

	if (!*head && !idx)
	{
	*head = node;
		return (node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
	node->next = temp;
	*head = node;
		return (node);
	}
	while (i < (idx - 1))
	{
	temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;
		return (node);
}
