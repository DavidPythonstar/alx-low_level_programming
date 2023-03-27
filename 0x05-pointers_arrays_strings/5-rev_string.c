#include "main.h"

/**
 * rev_string - counts letter in a strings
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		counter++;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
