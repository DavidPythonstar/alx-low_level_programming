#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t node_c = 0;

	while (h)
	{
		node_c++;
		h = h->next;
	}
	return (node_c);
}
