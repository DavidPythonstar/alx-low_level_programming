#include "lists.h"

/**
 * list_len - outputs the number of nodes in a list
 * @h: head of the linked list
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count;

	while (h->next != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_coount);
}

