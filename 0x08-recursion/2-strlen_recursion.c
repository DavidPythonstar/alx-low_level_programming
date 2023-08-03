#include "main.h"

/**
 * _strlen_recursion - counts the number of characters in the string
 * @s: string to be cunted
 * Return: Number of characters in a string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);
	}
	length++;
	s++;
	length += _strlen_recursion(s);

	return  (length);
}
