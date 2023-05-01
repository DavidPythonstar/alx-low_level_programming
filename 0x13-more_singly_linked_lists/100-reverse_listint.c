#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: points to the first node
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	return (previous);

}
