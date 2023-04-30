#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the element of a linked list
 * @h: head of the node
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
