#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints out all elements
 * of a linked list
 * @h: h of the linked list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
