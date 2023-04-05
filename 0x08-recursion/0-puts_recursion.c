#include "main.h"

/**
 * _puts_recursion - rwcursively prints a string
 * @s: a string to be printed
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
