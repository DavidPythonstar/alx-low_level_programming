#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints node of a linked list
 * @head: ponts to the first node
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list;
	size_t counter = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		list = head;
		head = head->next;

		if (list <= head)
		{
			printf("->[%p] %d\n",(void *)head, head->n);
			exit(98);
		}
	}
	return (counter);
}
