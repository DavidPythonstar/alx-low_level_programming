#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - create  acopy of the given string
 * @str: the given string
 * Return: apointer ro a copy of string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
