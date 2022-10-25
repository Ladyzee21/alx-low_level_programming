#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new nodes to the end of the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new_node;
		listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
	new_node->n = n;
	new_node->next = NULL;
	}
			else
		return (NULL);
	if (cursor != NULL)
	{
	while (cursor->next != NULL)
		cursor = cursor->next;

	cursor->next = new_node;
	}
		else
	*head = new_node;
	return (new_node);
}
