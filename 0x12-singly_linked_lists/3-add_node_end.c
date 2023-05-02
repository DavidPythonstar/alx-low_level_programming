#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: the starting of the linked list
 * @str: value to be added
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_data, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_data = malloc(sizeof(list_t));
	if (new_data == NULL)
		return (NULL);

	new_data->str = strdup(str);
	new_data->len = str_len;
	new_data->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_data;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_data;
	}

	return (*head);
}
