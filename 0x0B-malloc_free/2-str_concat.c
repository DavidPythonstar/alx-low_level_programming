#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Add two strings together
 * @s1: string one
 * @s2: string two
 * Return: a new space in memort with the added strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, total_len = 0;
	char *new_str;


	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	total_len = len1 + len2;
	new_str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		new_str[i] = s2[j];
	new_str[total_len] = '\0';

	return (new_str);
}
