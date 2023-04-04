#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the occurance of  a given character
 * @s: string
 * @c: character to be found
 * Return: point of the character occurance
 */

char *_strchr(char *s, char c)
{
	int i;
	char *d;

	d = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			d = &s[i];
			break;
		}
	}
	return (d);
}
