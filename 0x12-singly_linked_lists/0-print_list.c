#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "main.h"

/**
 * print_list - prints the nodes in the linked list
 * @h - head of the node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	while (h->next != NULL)
	{
	
		if (h->str == NULL)
			printf("[0] nil");
		else
		{
			printf("[%d] %s", h->len, h->str);
		}

		h = h->next;
		counter++;
	}
	return (counter);
}
