#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string
 * Return: negative or postive value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}