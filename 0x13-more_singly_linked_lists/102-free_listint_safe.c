#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees thelinked list
 * @h: beginning of the linked list
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp, *current = *h, *prev = NULL;

	if (!h || !*h)
		return (0);

	while (current != NULL)
	{
		if (prev != NULL && prev >= current)
		{
		break;
		}

		temp = current->next;
		free(current);
		prev = current;
		current = temp;
		counter++;
	}
	*h = NULL;

	return (counter);
}
