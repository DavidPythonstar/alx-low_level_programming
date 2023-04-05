#imclude "main.h"

/**
 * _print_rev_recursion - print a string in revese
 * @s: a string to be printed
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);

	}
	else
		return;
}
