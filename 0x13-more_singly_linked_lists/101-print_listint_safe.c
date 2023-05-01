#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints the elements of a linked list
 * and returns the number of nodes
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list = head;
	size_t counter = 0;

	for (; list != NULL; list = list->next, counter++)
	{
		printf("[%p] %d\n", (const void *)list, list->n);

		/* Check for a loop */
		if (list->next <= list)
		{
			printf("->[%p] %d\n", (const void *)list->next, list->next->n);
			exit(98);
		}
	}
	return (counter);
}
