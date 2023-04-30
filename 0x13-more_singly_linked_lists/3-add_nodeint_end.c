#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 * @head: the beginning of the linkrd list
 * @n: new data to be added
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
