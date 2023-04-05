#include "main.h"

/**
 * _strlen_recursion - calculates the number of letters
 * @s: string
 * Return: number od letters i  a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return ( _strlen_recursion(s) + 1);
}
