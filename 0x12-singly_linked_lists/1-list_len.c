#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of nodes in the linked list
 * @h: head of the node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{

		h = h->next;
		counter++;
	}
	return (counter);
}

