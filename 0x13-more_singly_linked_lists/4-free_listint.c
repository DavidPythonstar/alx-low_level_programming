#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Clears memeory of  the linkrd list
 * @head: the beginnig of th linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
