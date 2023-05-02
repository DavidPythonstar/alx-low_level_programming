#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the linked list
 * @head: beginning of the linked list
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
