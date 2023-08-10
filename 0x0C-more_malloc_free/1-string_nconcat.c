#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concates two strings
 * @s1: string one
 * @s2: string two
 * @n: int
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j, s1_len = 0;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	if (n >= j)
		n = j;
	pointer = malloc(sizeof(char) * (i + n + 1));
	if (pointer == NULL)
		return (NULL);
	s1_len = i;
	for (i = 0; i < s1_len; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pointer[i] = s2[j];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
