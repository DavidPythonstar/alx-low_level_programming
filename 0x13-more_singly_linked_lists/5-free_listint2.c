#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Clears memeory of  the linkrd list
 * @head: the beginnig of th linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}

}
