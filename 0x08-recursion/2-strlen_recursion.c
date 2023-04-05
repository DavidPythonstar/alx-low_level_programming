#include "main.h"

/**
 * _strlen_recursion - calculates the number of letters
 * @s: string
 * Return: number od letters i  a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
