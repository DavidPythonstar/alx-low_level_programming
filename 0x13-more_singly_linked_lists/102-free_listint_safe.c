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
	int difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h != NULL)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}

	*h = NULL;

	return (counter);
}
